# labing some library 
add_library(accounter 
            Account.cpp 
            Savings_Account.cpp
)
add_library(derived_baser 
            Base.cpp 
            Derive_Base.cpp
)
add_library(checker
            Checking_Account.cpp Account.cpp 
)
add_library(truster 
            Trust_Account.cpp Savings_Account.cpp
)