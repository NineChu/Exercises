const Sequelize = require('sequelize');
const database = require('./conexao');

const clientes = database.define('clientes', {
    id: {
        type: Sequelize.INTEGER,
        unique: true,
        allowNull: false,
        autoIncrement: true,
        primaryKey: true
    },
    nome: {
        type: Sequelize.STRING(60),
        allowNull: false
    },
    cpf: {
        type: Sequelize.CHAR(11),
        unique: true,
        allowNull: false
    },
    email: {
        type: Sequelize.CHAR(40),
        unique: true,
        allowNull: false
    },
    cep: {
        type: Sequelize.INTEGER,
        allowNull: false
    },
    telefone: {
        type: Sequelize.CHAR(20),
        unique: true,
        allowNull: false
    },
    datanasc: {
        type: Sequelize.DATE,
        allowNull: false
    },
});

//clientes.sync();

module.exports = clientes;
