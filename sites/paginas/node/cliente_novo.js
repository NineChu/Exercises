const Sequelize = require('sequelize');
const database = require('./conexao');
const cliente = require('./clientes');

const clienteNovo = cliente.create({
    nome: 'Gabigol',
    cpf: '20030040099',
    celular: '2199001234',
    datanasc: '1996-08-30'
});

module.exports = clienteNovo;
