# hxXmlAIJT - Haxe XML Array Index Join-Table
This is a simple program that accepts an array of primary keys and returns an embeddable XML data source containing a join table.
This can be especially useful when you have to sort an existing recordset by an external parameter but do not want to add a new table or database.

### Gist of the idea
Say you have an existing SQL Server database of customers, and you would like to retrieve a record set ordered by a precalculated sales route contained in an array outside of the database (say a spreadsheet).

You would simply drop the spreadsheet into hxXmlAIJT and then query all of the PKs from the XML join table ordered by all of the array indexes also stored in the join table. Optionally JOIN the recordset with your actual customer database ON the XML PK matching the customer PK.

## To Do
- Add regular expression formatting so that the Xml datasets look decent.
- Allow for multiple primary keys in input.