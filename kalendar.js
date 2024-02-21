// Funkcija koja se poziva kada se učita stranica
document.addEventListener("DOMContentLoaded", function () {
  // Pozivamo funkciju za generisanje kalendara
  generateCalendar();
});

// Funkcija za generisanje kalendara
function generateCalendar() {
  const calendarDiv = document.getElementById("calendar");

  // Broj dana u septembru
  const daysInSeptember = 30;
  let b = 0;
  let i; // Promenljiva za broj dana

  // Dodajemo HTML za svaki dan u septembru
  for (i = 1; i <= daysInSeptember + b; i++) {
    const dayDiv = document.createElement("div");
    if (b < 4) {
      dayDiv.classList.add("empty");
      b++;
    }
    dayDiv.classList.add("day");

    // Ako je trenutni dan petak, dodajemo broj dana i event listenere
    if (new Date(2023, 8, i).getDay() === 4) {
      // 4 označava petak
      dayDiv.textContent = i - b;

      // Dodajemo event listenere za prikazivanje tooltip-a kada se pređe mišem preko dana
      dayDiv.addEventListener("mouseover", function (event) {
        const tooltip = document.getElementById("tooltip");
        tooltip.textContent = "Informacije za " + event.target.textContent; // Prilagodite tekst tooltip-a
        tooltip.style.display = "block";
        tooltip.style.top = event.clientY + 10 + "px";
        tooltip.style.left = event.clientX + 10 + "px";
      });

      // Dodajemo event listenere za sakrivanje tooltip-a kada se miš udalji sa dana
      dayDiv.addEventListener("mouseout", function () {
        const tooltip = document.getElementById("tooltip");
        tooltip.style.display = "none";
      });
    } else {
      // Ako dan nije petak, popunjavamo div bez event listenera
      dayDiv.textContent = i - b;
    }

    calendarDiv.appendChild(dayDiv);
    b = i;
  }

  // Dodajemo prazan div za 31. dan ako je potrebno
  if (b == daysInSeptember + 1) {
    const dayDiv = document.createElement("div");
    dayDiv.classList.add("day");
    dayDiv.classList.add("empty");
    calendarDiv.appendChild(dayDiv);
  }
}
