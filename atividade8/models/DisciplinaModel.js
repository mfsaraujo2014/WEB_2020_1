var mongoose = require('mongoose');
//criando o schema, o qual servirá para criar o modelo (collections)
var DisciplinaSchema = mongoose.Schema(
    {
        nome: { type: String, required: true, max: 100 },
        curso: { type: String, required: true, max: 100 },
        capacidade: { type: Number, required: true },
    }
);
//criando o modelo a partir do schema acima, o qual servirá para incluir as instâncias
//(documentos)
var DisciplinaModel = mongoose.model('disciplinas', DisciplinaSchema);
//retornando o modelo a ser usado pelo serviço (CRUD).
module.exports = DisciplinaModel;