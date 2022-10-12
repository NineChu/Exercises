var http = require("http");

var servidor = http.createServer(function (req, res) {
    var segmento = req.url;
    if (segmento == "/tecnologia") {
        res.end("<html><head><meta charset = UTF-8 /></head><body>Esta é uma págia de Tecnologia</body></html>");
    }
})

servidor.listen(3000);
console.log("Abc");