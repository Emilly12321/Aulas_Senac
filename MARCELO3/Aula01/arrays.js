//                0         1        2
const nomes = ['Marcelo', 'Maria', 'João'];
nomes[2] = 'Carlos';
nomes[3] = 'José';
nomes[4] = 'Pedro'
nomes[5] = 'Lucas';
nomes.push('Lara'); //Adiciona no final
nomes.unshift('Marcos');//Adiciona no inicio

delete nomes[3]; //remove um elemento por indice
nomes.pop();//remove o ultimo elemento
nomes.shift();//remove o primeiro elemento

//Join => transforma um Array em String
const nomeTexto = nomes.join(', ');
console.log(nomeTexto);
//Split => transforma uma String em Array
const nomeArray = nomeTexto.split(', ');
console.log(nomeArray);

console.log(nomes);