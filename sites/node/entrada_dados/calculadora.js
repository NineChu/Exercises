var ler_dados = require('readline-sync');

var operacao = ler_dados.question('Digite a operacao (+, -, *, /): ');
var valor1 = ler_dados.question('Digite o primeiro valor : ');
var valor2 = ler_dados.question('Digite o segundo valor : ');
var resultado;

if (operacao == '+') {
    resultado = parseInt(valor1) + parseInt(valor2);
} else if (operacao == '-') {
    resultado = parseInt(valor1) - parseInt(valor2);
} else if (operacao == '*') {
    resultado = parseInt(valor1) * parseInt(valor2);
} else if (operacao == '/') {
    resultado = parseInt(valor1) / parseInt(valor2);
}

if (resultado != NaN && resultado == 'undefined') {
    console.log('O resultado do cálculo é: ' + resultado);
} else {
    console.log('Erro.')
    if (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/') {
        console.log('Operador invalido.');
    }
    if (operacao == '/' && valor2 == 0) {
        console.log('Nao é possível dividir por 0.');
    }
}