//parser testing
/* parser testing */
uses gw.util.*

class SQLInjectionExample1 
{
    // Function to simulate user login
    function userLogin(username: String, password: String): String {
        // Vulnerable SQL query without parameterization
        var sqlQuery = "SELECT * FROM users WHERE username = '" + username + "' AND password = '" + password + "';"

        // Execute the query (just simulating here)
        var result = executeSQLQuery(sqlQuery)

        // Return the result based on the query response
        if (result == "Success") {
            return "Login successful!"
        } else {
            return "Invalid credentials!"
        }
    }

    // Function to simulate SQL execution (unsafe)
    function executeSQLQuery(query: String): String {
        print("Executing SQL Query: " + query)

        // Simulating that the query always succeeds
        // In reality, here would be code that runs the SQL against a database
        if (query.contains("admin' OR '1'='1")) {
            return "Success" // Simulated result from a successful login
        } else {
            return "Failure" // Simulated result from an invalid login
        }
    }
}