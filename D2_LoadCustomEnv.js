// Require custom-env and set your preferred env file
//Create a .env.staging file via vscode and install npm i custom-env
//Run this code as  node D2_LoadCustomEnv.js
require ('custom-env').env('staging')
console.log(process.env.APP_ENV)
console.log(process.env.APP_NAME)
console.log(process.env.DB_HOST)
console.log(process.env.DB_PASS)