const cliente = require('./clientes');

const clienteNovo = cliente.create({
    nome: 'Jefferson',
    cpf: '01234567890',
    celular: '5511987654321',
    datanasc: '1969-06-20'
});

module.exports = clienteNovo;
