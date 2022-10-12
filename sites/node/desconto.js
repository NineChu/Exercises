var valor_produto;     // R$2.000,00
var valor_percentual;  // 20%
var valor_descontado;  // R$400,00
var valor_liquido;     // R$1.600,00

valor_produto = 2000;
valor_percentual = 20;

valor_descontado = (valor_percentual / 100) * valor_produto;
valor_liquido = valor_produto - valor_descontado;

console.log("Valor Líquido do Produto: " + valor_liquido.toLocaleString('en-US', {style: 'currency', currency: 'USD'}));
console.log("Valor Líquido do Produto: " + valor_liquido.toLocaleString('pt-br', {style: 'currency', currency: 'BRL'}));