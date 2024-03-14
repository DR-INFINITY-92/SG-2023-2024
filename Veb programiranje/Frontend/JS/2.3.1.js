function konvertujVelikaIMala() {
  var ks = "";
  var s = document.getElementById("string").value;
  for (var i = 0; i < s.length; i++) {
    var trenutniZnak = s[i];
    if (trenutniZnak >= "A" && trenutniZnak <= "Z") {
      ks += trenutniZnak.toLowerCase();
    } else if (trenutniZnak >= "a" && trenutniZnak <= "z") {
      ks += trenutniZnak.toUpperCase();
    } else {
      ks += trenutniZnak;
    }
  }
  document.getElementById("1s").innerHTML = s;
  document.getElementById("ks").innerHTML = ks;
}
