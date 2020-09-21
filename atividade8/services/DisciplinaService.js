const DisciplinaModel = require('../models/DisciplinaModel');
class DisciplinaService {
    //retorna um objeto que representa um User
    static register(req, res) {
        DisciplinaModel.create(req.body).then(
            (disciplina) => {
                res.status(201).json(disciplina);
            }
        );
    }
    //retorna um vetor de users
    static list(req, res) {
        DisciplinaModel.find().then(
            (disciplina) => {
                res.status(201).json(disciplina);
            }
        );
    }

    //retorna um user atualizado
    static update(req, res) {
        DisciplinaModel.findByIdAndUpdate(req.params.id, req.body, { 'new': true }).then(
            (disciplina) => {
                res.status(201).json(disciplina);
            }
        );
    }
    //retorna o user deletado
    static delete(req, res) {
        DisciplinaModel.findByIdAndRemove(req.params.id).then(
            (disciplina) => {
                res.status(201).json(disciplina);
            }
        );
    }
    //retorna um user
    static retrieve(req, res) {
        DisciplinaModel.findById(req.params.id).then(
            (disciplina) => {
                res.status(201).json(disciplina);
            }
        );
    }
}

module.exports = DisciplinaService;