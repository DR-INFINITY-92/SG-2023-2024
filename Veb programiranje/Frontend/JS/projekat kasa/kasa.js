let output = document.getElementById("output");
let currentInput = "0";
let operator = null;
let memory = null;
let result = 0;

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
  // let result;
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
function kusur() {
  let bn5k, bn2k, bn1k, bn500, bn200, bn100, bn50, bn20, bn10, bn5, bn2, bn1;
  let dat_novac = document.getElementById("dat_novac").value;
  dat_novac = parseInt(dat_novac);
  let kusur = dat_novac - parseInt(result);
  let ispiskusura = "Iznos vaseg kusura je " + kusur;
  document.getElementById("kusur").innerText = ispiskusura;
  bn5k = Math.floor(kusur / 5000);
  kusur = kusur % 5000;
  bn2k = Math.floor(kusur / 2000);
  kusur = kusur % 2000;
  bn1k = Math.floor(kusur / 1000);
  kusur = kusur % 1000;
  bn500 = Math.floor(kusur / 500);
  kusur = kusur % 500;
  bn200 = Math.floor(kusur / 200);
  kusur = kusur % 200;
  bn100 = Math.floor(kusur / 100);
  kusur = kusur % 100;
  bn50 = Math.floor(kusur / 50);
  kusur = kusur % 50;
  bn20 = Math.floor(kusur / 20);
  kusur = kusur % 20;
  bn10 = Math.floor(kusur / 10);
  kusur = kusur % 10;
  bn5 = Math.floor(kusur / 5);
  kusur = kusur % 5;
  bn2 = Math.floor(kusur / 2);
  kusur = kusur % 2;
  bn1 = Math.floor(kusur / 1);
  kusur = kusur % 1;
}
