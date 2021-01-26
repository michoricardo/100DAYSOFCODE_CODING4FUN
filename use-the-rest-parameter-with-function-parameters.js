/*... es para parametros variables el reduce aplica algo a cada elemento*/ 

const sum = (...args) => {
  return args.reduce((a, b) => a + b, 0);
}