document.addEventListener("DOMContentLoaded", function () {
  var openFormBtn = document.getElementById("openFormBtn");
  var popupForm = document.getElementById("popupForm");
  var studentForm = document.getElementById("studentForm");

  openFormBtn.addEventListener("click", function () {
    popupForm.style.display = "block";
  });

  studentForm.addEventListener("submit", function (event) {
    event.preventDefault();
    var name = document.getElementById("name").value;
    var age = document.getElementById("age").value;

    var student = {
      name: name,
      age: age,
    };

    console.log(student); // Ovdje možete dodati kod za daljnju obradu podataka
    popupForm.style.display = "none";
  });
});
