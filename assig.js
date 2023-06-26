var number1, number2, correctAnswer;
var correctCount = 0;
var incorrectCount = 0;
var operationType;

function generateQuestion() {
    number1 = Math.floor(Math.random() * 9) + 1; // Generate random number between 1 and 9
    number2 = Math.floor(Math.random() * 9) + 1; // Generate random number between 1 and 9

    switch (operationType) {
        case 1:
            correctAnswer = number1 + number2;
            document.getElementById("question").innerHTML = "How much is " + number1 + " plus " + number2 + "?";
            break;
        case 2:
            correctAnswer = number1 - number2;
            document.getElementById("question").innerHTML = "How much is " + number1 + " minus " + number2 + "?";
            break;
        case 3:
            correctAnswer = number1 * number2;
            document.getElementById("question").innerHTML = "How much is " + number1 + " times " + number2 + "?";
            break;
        case 4:
            correctAnswer = number1 / number2;
            document.getElementById("question").innerHTML = "How much is " + number1 + " divided by " + number2 + "?";
            break;
        case 5:
            var operator = Math.floor(Math.random() * 4) + 1; // Generate random number between 1 and 4

            switch (operator) {
                case 1:
                    correctAnswer = number1 + number2;
                    document.getElementById("question").innerHTML = "How much is " + number1 + " plus " + number2 + "?";
                    break;
                case 2:
                    correctAnswer = number1 - number2;
                    document.getElementById("question").innerHTML = "How much is " + number1 + " minus " + number2 + "?";
                    break;
                case 3:
                    correctAnswer = number1 * number2;
                    document.getElementById("question").innerHTML = "How much is " + number1 + " times " + number2 + "?";
                    break;
                case 4:
                    correctAnswer = number1 / number2;
                    document.getElementById("question").innerHTML = "How much is " + number1 + " divided by " + number2 + "?";
                    break;
            }
            break;
        default:
            document.getElementById("question").innerHTML = "Invalid operation type.";
            break;
    }

    document.getElementById("response").innerHTML = "";
    document.getElementById("answer").value = "";
}

function checkAnswer() {
    var userAnswer = parseFloat(document.getElementById("answer").value);

    if (userAnswer === correctAnswer) {
        var responseNumber = Math.floor(Math.random() * 4) + 1; // Generate random number between 1 and 4

        var response;
        switch (responseNumber) {
            case 1:
                response = "Very good!";
                break;
            case 2:
                response = "Excellent!";
                break;
            case 3:
                response = "Nice work!";
                break;
            case 4:
                response = "Keep up the good work!";
                break;
            default:
                response = "Invalid response number.";
                break;
        }

        document.getElementById("response").innerHTML = response;
        correctCount++;
    } else {
        document.getElementById("response").innerHTML = "No. Please try again.";
        incorrectCount++;
    }

    if ((correctCount + incorrectCount) === 10) {
        var percentage = (correctCount / 10) * 100;
        if (percentage < 75) {
            document.getElementById("message").innerHTML = "Please ask your instructor for extra help, and reset the quiz so another student can try it.";
        } else {
            document.getElementById("message").innerHTML = "Congratulations! You have successfully completed the quiz.";
        }
        correctCount = 0;
        incorrectCount = 0;
    }

    generateQuestion(); // Generate a new question
}