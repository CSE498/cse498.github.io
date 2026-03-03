// Fetch all the radio buttons in the quiz
let radioButtons = document.querySelectorAll('input[type="radio"]');

// Add a click event to each radio button
radioButtons.forEach(button => {
  button.addEventListener('click', function() { clearResults(button.name); });
});

function clearResults(button_name) {
  // Clear main results
  document.getElementById('results').innerHTML = '';

  // Clear answers displayed beneath each question
  let answerDiv = document.querySelector(`.answer[data-question="${button_name}"]`);
  answerDiv.innerHTML = "";
}

function PrintResults(show_correct) {  event.preventDefault(); // Prevent form from submitting to a server
  let correctAnswers = {
    q35: "(C)",
    q12: "(A)",
    q34: "(C)",
    q17: "(D)",
    q10: "(C)",
    q14: "(C)",
    q15: "(B)",
    q25: "(D)",
    q1: "(A)",
    q42: "(C)",
    q23: "(B)",
    q2: "(A)",
    q39: "(D)",
    q13: "(B)",
    q37: "(E)",
    q19: "(D)",
    q36: "(C)",
    q44: "(E)",
    q40: "(E)",
    q24: "(B)",
    q21: "(C)",
    q7: "(D)",
    q3: "(D)",
    q20: "(A)",
    q16: "(E)",
    q31: "(E)",
    q41: "(E)",
  };

  let userAnswers = {};
  for (let key in correctAnswers) {
    let selectedAnswer = document.querySelector(`input[name="${key}"]:checked`);
    userAnswers[key] = selectedAnswer ? selectedAnswer.value : ""; 
    if (userAnswers[key] === "" && document.querySelector(`#${key}`)) {
      userAnswers[key] = document.querySelector(`#${key}`).value; 
    }
  }

  let score = 0;
  let results = [];

  for (let key in correctAnswers) {
    if (userAnswers[key] === correctAnswers[key]) {
      score++;
      results.push({
        question: key,
        status: 1,
        correctAnswer: correctAnswers[key]
      });
    } else {
      results.push({
        question: key,
        status: 0,
        correctAnswer: correctAnswers[key]
      });
    }
  }

  displayResults(score, results, show_correct);
};

function displayResults(score, results, show_correct) {
  let resultsDiv = document.getElementById('results');
  resultsDiv.innerHTML = `<p>You got ${score} out of ${Object.keys(results).length} correct!</p>`;

  // Reset all answer texts
  let answerDivs = document.querySelectorAll('.answer');
  answerDivs.forEach(div => div.innerHTML = "");

  results.forEach(item => {
    let answerDiv = document.querySelector(`.answer[data-question="${item.question}"]`);
    if (item.status === 0) {
      if (show_correct) {
        answerDiv.innerHTML = `<b>Incorrect</b>. The correct answer is: ${item.correctAnswer}`;
      } else {
        answerDiv.innerHTML = `<b>Incorrect</b>.`;
      }
      answerDiv.style.color = "red";
    } else {
      answerDiv.innerHTML = `<b>Correct!</b>`;
      answerDiv.style.color = "green";
    }
  });
};

document.getElementById('showAnswersBtn').addEventListener('click', function() {
  PrintResults(1);
});

document.getElementById('checkAnswersBtn').addEventListener('click', function() {
  PrintResults(0);
});
