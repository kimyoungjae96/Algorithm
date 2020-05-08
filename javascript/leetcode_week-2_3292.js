/**

initialize your data structure here.
*/
var MinStack = function () {
  this.stack = [];
  this.min = 0;
};
/**
    
    @param {number} x
    
    @return {void}
    */
MinStack.prototype.push = function (x) {
  this.stack.push(x);

  if (this.stack.length === 1) {
    this.min = x;
  }

  this.min = Math.min(this.min, x);
};

/**
    
    @return {void}
    */
MinStack.prototype.pop = function () {
  let val = this.stack.pop();

  if (this.min === val) {
    this.min = Math.min(...this.stack);
  }
};

/**
    
    @return {number}
    */
MinStack.prototype.top = function () {
  return this.stack[this.stack.length - 1];
};
/**
    
    @return {number}
    */
MinStack.prototype.getMin = function () {
  return this.min;
};
/**
    
    Your MinStack object will be instantiated and called as such:
    var obj = new MinStack()
    obj.push(x)
    obj.pop()
    var param_3 = obj.top()
    var param_4 = obj.getMin()
    */
