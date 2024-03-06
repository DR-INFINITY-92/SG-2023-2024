const datum = new Date();
var trenutni_sati = datum.getHours();
if (trenutni_sati >= 6 && trenutni_sati <= 10)
  console.log("Dobro jutro Trenutno je =" + trenutni_sati + " sati");
else if (trenutni_sati > 10 && trenutni_sati <= 19)
  console.log("Dobro dan Trenutno je =" + trenutni_sati + " sati");
else console.log("Dobro vece  Trenutno je =" + trenutni_sati + " sati");
