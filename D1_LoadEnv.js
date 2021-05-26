var dotenv = require('dotenv');
// There's no need to check if .env exists, dotenv will check this 
// for you. It will show a small warning which can be disabled when 
// using this in production.

console.log(process.env.APP_ENV)
console.log(process.env.APP_NAME)
console.log(process.env.DB_HOST)
console.log(process.env.DB_PASS)