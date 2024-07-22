let numero = 6;
let raiz = Math.sqrt(numero);

// 1 forma de resolver
if (raiz % 1 === 0){
    console.log(`${numero} é uma raiz exata!`);
} else {
    console.log(`${numero} NÃO é uma raiz exata!`) 
}

// 2 forma de resolver
if (Number.isInteger(raiz)){
    console.log(`${numero} é uma raiz exata!`);
} else {
    console.log(`${numero} NÃO é uma raiz exata!`) 
}

