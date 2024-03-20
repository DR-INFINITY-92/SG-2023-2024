let output = document.getElementById("output");
let currentInput = "0";
let operator = null;
let memory = null;

function appendNumber(number) {
  if (currentInput === "0") {
    currentInput = number;
  } else {
    currentInput += number;
  }
  output.innerText = currentInput;
}

function appendOperator(op) {
  if (operator !== null) {
    calculate();
  }
  operator = op;
  memory = currentInput;
  currentInput = "0";
}

function clearOutput() {
  currentInput = "0";
  operator = null;
  memory = null;
  output.innerText = currentInput;
}

function calculate() {
  if (operator === null || memory === null) return;
  let result;
  switch (operator) {
    case "+":
      result = parseFloat(memory) + parseFloat(currentInput);
      break;
    case "-":
      result = parseFloat(memory) - parseFloat(currentInput);
      break;
    case "*":
      result = parseFloat(memory) * parseFloat(currentInput);
      break;
    case "/":
      result = parseFloat(memory) / parseFloat(currentInput);
      break;
  }
  output.innerText = result;
  currentInput = result;
  memory = null;
  operator = null;
}
