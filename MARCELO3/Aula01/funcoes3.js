//Funcção do tipo Objeto
function Pessoa(nome, sobrenome){
    const ID = 123; //Privado

    //Publicos
    this.nome = nome;
    this.sobrenome = sobrenome;
    this.metodoFalar = function(){
        console.log('Falo método Português');
    }
    this.getID = function(){
        return ID;
    }
}

const p1 = new Pessoa('marcelo', 'petri');
console.log(p1);
p1.metodoFalar();
console.log(p1.getID());

