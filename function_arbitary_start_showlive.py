def printdomains(*domains): # function definition
    for domain in domains:
        print(domain)
printdomains("google.com","apple.com","microsoft.com") # function call


# multi statement show data
def domaininfo(**domain):
    for key in domain:
        print(domain[key])
domaininfo(host="google.com",port=443)