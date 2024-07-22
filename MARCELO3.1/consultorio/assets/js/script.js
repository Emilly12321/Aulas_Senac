let pacientes = [];

function adicionarPaciente(){
    let inPaciente = document.querySelector('#inPaciente');
    let outLista = document.querySelector('#outLista');

    if (inPaciente.value == ''){
        alert('Informe o nome do Paciente');
        inPaciente.focus();
        return;
    }
    //Adicionar paciente no vetor
    pacientes.push(inPaciente.value);

    //Gerar a lista de paciente
    let lista = "";
    for (let i=0; i<pacientes.length; i++){
        lista += (i+1)+" - "+pacientes[i]+"\n";
    }
    outLista.textContent = lista;
    inPaciente.value="";
    inPaciente.focus();
}

function adicionarUrgencia(){
    let inPaciente = document.querySelector('#inPaciente');
    let outLista = document.querySelector('#outLista');

    if (inPaciente.value == ""){
        alert('Informe o nome do Paciente');
        inPaciente.focus();
        return;
    }
    //Adicionar paciente no vetor
    pacientes.unshift(inPaciente.value);

    //Gerar a lista de paciente
    let lista = "";
    for (let i=0; i<pacientes.length; i++){
        lista += (i+1)+" - "+pacientes[i]+"\n";
    }
    outLista.textContent = lista;
    inPaciente.value="";
    inPaciente.focus();
}

function atenderPaciente(){
    let outLista = document.querySelector('#outLista');
    let outAtendimento = document.querySelector('#outAtendimento');

    let atendimento = pacientes.shift();
    outAtendimento.textContent = atendimento;

    let lista = "";
    for(let i=0; i<pacientes.length; i++){
        lista += (i+1)+" - "+pacientes[i]+"\n";
    }
    outLista.textContent = lista;
}

// Link com os botões
let btAdicionar = document.querySelector('#btAdicionar');
btAdicionar.addEventListener('click', function(){
    adicionarPaciente();
});

let btUrgencia = document.querySelector('#btUrgencia');
btUrgencia.addEventListener('click', function(){
    adicionarUrgencia();
});

let btAtender = document.querySelector('#btAtender');
btAtender.addEventListener('click', function(){
    atenderPaciente();
});