const express = require("express");
const router = express.Router();
const clientes = require("../clientes");

router.get("/", (req, res) => {
    res.render("../views/secao/home.ejs");
});

router.get("/tecnologia", (req, res) => {
    res.render("../views/secao/tecnologia.ejs");
});

router.get("/cadastro", (req, res) => {
    res.render("../views/secao/cadastro_cliente.ejs");
});

router.post("/add_cliente", (req, res) => {
    clientes
        .create({
            nome: req.body.nome,
            cpf: req.body.cpf,
            celular: req.body.celular,
            datanasc: req.body.datanasc,
        })
        .then(() => {
            res.send("Cliente novo criado com sucesso!");
        })
        .catch((err) => {
            res.send("Houve um " + err);
        });
});

router.get("/alteracao", (req, res) => {
    res.render("../views/secao/altera_cliente.ejs");
})

router.post("/altera_cpf", (req, res) => {
    clientes
        .update({
            cpf: req.body.cpf
        }, { where: {celular: req.body.celular}})
        .then(() => {
            res.send("CPF alterado com sucesso!");
        })
        .catch((err) => {
            res.send("Houve um " + err);
        });
});

router.get("/lista_clientes", (req, res) => {
    clientes.findAll({ attributes: ["nome", "cpf", "celular"] }).then((cliente) => res.render("../views/secao/lista_clientes.ejs", { cliente: cliente }));
});

module.exports = router;
