//let nomes = ["Marcelo", "Maria"]; //Direto
let nomes = [];
nomes[0] = "marcelo";
nomes[1] = "maria";
nomes[2] = "josé";
nomes[nomes.length] = "Carlos";
nomes[nomes.length] = "João";

//Adicionar no final do vetor
nomes.push("Roberto");
console.log("Nomes:", nomes);
console.log("Tamanho do Vetor: ", nomes.length);

//Adicionar no inicio do vetor
nomes.unshift("Mônica");
console.log("Nomes:", nomes);
console.log("Tamanho do Vetor: ", nomes.length);

//Remover o ultimo elemento do vetor
nomes.pop();
console.log("Nomes:", nomes);
console.log("Tamanho do Vetor: ", nomes.length);

//Remover o primeiro elemento do vetor
nomes.shift();
console.log("Nomes:", nomes);
console.log("Tamanho do Vetor: ", nomes.length);

// Mostrar vetor usando repetição
for (let i=0; i<nomes.length; i++){
    console.log(`indice[${i}] - ${nomes[i]}`);
}
// Mostrar vetor usando join
console.log(nomes.join(" @ "));

// Posição (indice) de um texto no vetor
console.log("Indice: ", nomes.indexOf("João"));//retorna indice do vetor
console.log("Indice: ", nomes.indexOf("Inês"));//retorna -1

//Objeto
let carro = {
    modelo: "Fusca",
    ano: 1973
}

let carros = [];
carros.push({modelo:"Fusca", ano: "1973"});
carros.push({modelo:"Corsa", ano: "2004"});
carros.push({modelo:"Escort XR3", ano: "1994"});
console.log(carros);

//Repetição para mostrar dados
for(let i=0; i<carros.length; i++){
    console.log(`${carros[i].modelo}`, 'Ano:', `${carros[i].ano}`)
}





