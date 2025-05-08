// Load our addon
const Addon = require('../native-addon/js')

// Try the helloWorld function
const result = Addon.helloWorld('This is a test')

// Should print: "Hello from C++! You said: This is a test"
console.log(result)
