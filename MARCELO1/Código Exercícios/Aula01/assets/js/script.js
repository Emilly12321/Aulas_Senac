//Variáveis
let idade = 44;  //inteiro |_ NUMBER
let peso = 78.95; //float  | 
let caracter = 'a'; //caracter
let nome = 'Marcelo Petri'; //String = conjunto de caracteres
let verdadeiro = true; // true ou false / 1 ou 0

console.log("Meu nome é: "+nome);
console.log("Minha idade é: "+idade);
console.log("Peso: "+peso);
console.log("Caracter: "+caracter);
console.log("Hoje chove? : "+verdadeiro);
console.log(typeof(verdadeiro));

//CONSTANTE
const PI = 3.14;
console.log("Valor de PI: "+PI);

//Operadores
// Somar
let numero1 = 10;
let numero2 = 50;

let soma = numero1 + numero2;
console.log("Soma: "+soma);

let subtracao = numero1 - numero2;
console.log("Subtracao: "+subtracao);

let divisao = numero1 / numero2;
console.log("Divisao: "+divisao);

let multiplicacao = numero1 * numero2;
console.log("Multiplicacao: "+multiplicacao);

let resto = numero1 % numero2;
console.log("Resto da divisão: "+resto);

// Comparação de valores
let comparacao = numero1 != numero2;
console.log(comparacao);
let valor1 = '10';
let valor2 = 10;
comparacao = valor1 === valor2; // ==  -> compara o valor
                                // === -> compara tipo e valor
console.log(comparacao);
let nomeCompleto = 10;

// Objetos
let professor = {
    nome: 'Marcelo',
    sobrenome: 'Petri',
    idade: 44,
    peso: 80.5,
}
let professor1 = {
    nome: 'Claudia',
    sobrenome: 'Werlich',
    idade: 25,
    peso: 40.5,
}
console.log(professor.nome, professor.sobrenome, professor.idade);
console.log(professor1.nome, professor1.sobrenome, professor1.idade);

console.log("Nome: "+professor.nome+" é professor");
console.log('Nome: '+professor.nome+' é professor');
console.log(`Nome: ${professor.nome} é professor`);


let idade1 = 44;
idade1 = idade1 + Number('1');
console.log(idade1);















