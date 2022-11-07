const express = require('express');
const router = express.Router();
const cliente = require('../clientes');
const nomesClientes = require('../nomes_clientes');

router.get('/', (req, res) => {
    res.render('../views/secao/home.ejs');
});

router.get('/tecnologia', (req, res) => {
    res.render('../views/secao/tecnologia.ejs');
});

router.get('/cadastro', (req, res) => {
    res.render('../views/secao/cadastro_cliente.ejs');
});

router.get('/nomes', (req, res) => {
    res.end(nomesClientes);
})

router.post('/add_cliente', (req, res) => {
    cliente.create({
        nome: req.body.nome,
        cpf: req.body.cpf,
        celular: req.body.celular,
        datanasc: req.body.datanasc
    }).then(() => {
        res.send('Cliente novo criado com sucesso!');
    }).catch((err) => {
        res.send('Houve um ' + err)
    })
});

module.exports = router;
