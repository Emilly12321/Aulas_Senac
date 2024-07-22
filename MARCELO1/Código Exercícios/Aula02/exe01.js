let horaBrasil = 24.00;
let horaFranca = 5; //+5

if (horaBrasil + horaFranca >= 24)
    horaFranca = ((horaFranca + horaBrasil) - 24).toFixed(2) ;
else
    horaFranca += horaBrasil;
    
console.log(`Hora na França: ${horaFranca}`)