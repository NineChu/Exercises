const express = require('express');
const router = express.Router();
const cliente = require('../clientes');

router.get('/', (req, res) => {
    res.render('../views/secao/home.ejs');
});

router.get('/tecnologia', (req, res) => {
    res.render('../views/secao/tecnologia.ejs');
});

router.get('/cadastro', (req, res) => {
    res.render('../views/secao/cadastro_cliente.ejs');
});

router.post('/add_cliente', (req, res) => {
    cliente.create({
        nome: req.body.nome,
        cpf: req.body.cpf,
        celular: req.body.celular,
        datanasc: req.body.datanasc
    }).then(() => {
        req.send('Cliente novo criado com sucesso!');
    }).catch((err) => {
        res.send('Houve um ' + err)
    })
});

module.exports = router;
