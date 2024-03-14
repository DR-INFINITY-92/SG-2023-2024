function posalji() {
  var ime = document.getElementById("fname").value;
  var prezime = document.getElementById("lname").value;

  // Validacija - na primer, možete proveriti da li su sva polja popunjena
  if (ime === "" || prezime === "") {
    alert("Molimo vas da popunite sva polja.");
    return;
  }
  document.getElementById("ip").innerHTML = ime + " " + prezime;
}
