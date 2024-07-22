//Entrada
let altura = 174;
let PesoAtual = 79.0;
let sexo = 'M'; //F
let PesoIdeal = 0;
let PesoAjustado = 0;
if (sexo == 'M'){
    PesoIdeal = 52 + (0.75 * (altura - 152.4));
    PesoAjustado = ((PesoAtual - PesoIdeal) * 0.25) + PesoIdeal;
} 
else if (sexo == 'F'){
    PesoIdeal = 52 + (0.67 * (altura - 152.4));
    PesoAjustado = ((PesoAtual - PesoIdeal) * 0.25) + PesoIdeal;
}
else {
    console.log('Sexo não foi informado!');
}    
console.log(`Peso Ideal: ${PesoIdeal}`);
console.log(`Peso Ajustado: ${PesoAjustado}`);
    