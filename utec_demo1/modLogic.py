import modData

def valExamenes():
  return modData.valdata('files/examenes.txt')

def valPostulantes():
  return modData.valdata('files/postulantes.txt')

def loadExamenes():
  dic_examenes = modData.loaddata('files/examenes.txt')
  return dic_examenes


