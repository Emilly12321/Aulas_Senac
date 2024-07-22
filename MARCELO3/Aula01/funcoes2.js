//Funções Fabricas (Factory Function)
function criaPessoa(nome, sobrenome, alt, peso){
    return {
        nome,
        sobrenome,
        alt,
        peso,
        imc(){
            const indice = this.peso / (this.alt**2);
            return indice;
        },
        fala(assunto) {
            return `${this.nome} está falando sobre ${assunto}`;
        },
    }
}

const pessoa1 = criaPessoa('Marcelo', 'Petri', 1.74, 78);
console.log(pessoa1.imc());
console.log(pessoa1.fala('JavaScript'));