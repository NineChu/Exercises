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
    res.render("../views/secao/cadastro.ejs");
});

router.post("/cadastrar_cliente", (req, res) => {
    clientes
        .create({
            nome: req.body.nome,
            cpf: req.body.cpf,
            email: req.body.email,
            cep: req.body.cep,
            telefone: req.body.telefone,
            datanasc: req.body.datanasc,
        })
        .then(() => {
            res.send("Cliente novo criado com sucesso!");
        })
        .catch((err) => {
            res.send("Houve um " + err);
        });
});

router.get("/alterar_registro", (req, res) => {
    res.render("../views/secao/alterarRegistro.ejs");
})

router.post("/alterar_registro", (req, res) => {
    clientes
        .update({
            nome: req.body.nome,
            email: req.body.email,
            cep: req.body.cep,
            telefone: req.body.telefone,
            datanasc: req.body.datanasc,
        }, { where: {cpf: req.body.cpf}})
        .then(() => {
            res.render("../views/secao/alterarRegistro.ejs");
        })
        .catch((err) => {
            res.send("Houve um " + err);
        });
});

router.get("/alterar_cpf", (req, res) => {
    res.render("../views/secao/alterarCPF.ejs");
})

router.post("/alterar_cpf", (req, res) => {
    clientes
        .update({
            cpf: req.body.cpf
        }, { where: {email: req.body.email}})
        .then(() => {
            res.render("../views/secao/alterarCPF.ejs");
        })
        .catch((err) => {
            res.send("Houve um " + err);
        });
});

router.get("/lista_clientes", (req, res) => {
    clientes.findAll({ attributes: ["id", "nome", "cpf", "email", "cep", "telefone", "datanasc"] }).then((cliente) => res.render("../views/secao/listaClientes.ejs", { cliente: cliente }));
});

module.exports = router;
