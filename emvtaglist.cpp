#include "emvtaglist.h"

EmvTagList::EmvTagList(QObject *parent)
    : QObject(parent)
{
    initializeTags();
}

void EmvTagList::initializeTags() {
    emvTagList.append(Tag("9F01", "Acquirer Identifier"));
    emvTagList.append(Tag("9F02", "Amount, Authorized"));
    emvTagList.append(Tag("9F03", "Amount, Other"));
    emvTagList.append(Tag("9F04", "Amount, Authorized (Other)"));

    emvTagList.append(Tag("9F07", "Application Usage Control"));
    emvTagList.append(Tag("9F08", "Application Version Number"));
    emvTagList.append(Tag("9F09", "Application Serial Number"));
    emvTagList.append(Tag("BF0C","File Control Information (FCI) Issuer Discretionary Data"));

    emvTagList.append(Tag("9F10", "Issuer Application Data"));
    emvTagList.append(Tag("9F11", "Issuer Application Identifier (IAI)"));

    emvTagList.append(Tag("9F40", "Issuer Action Code - Default"));
    emvTagList.append(Tag("9F42", "Issuer Action Code - Denial"));
    emvTagList.append(Tag("9F44", "Issuer Action Code - Online"));

    emvTagList.append(Tag("5F2A", "Transaction Currency Code"));
    emvTagList.append(Tag("5F34", "Application PAN Sequence Number"));
    emvTagList.append(Tag("5F36", "Application Transaction Counter (ATC)"));
    emvTagList.append(Tag("5F37", "Application Transaction Counter (ATC) - Terminal"));
    emvTagList.append(Tag("5F30", "Service Code"));

    emvTagList.append(Tag("5F24", "Application Expiration Date"));
    emvTagList.append(Tag("9F5B", "Application Cryptogram"));
    emvTagList.append(Tag("9F5C", "Cryptogram Information Data"));
    emvTagList.append(Tag("9F5D", "Application Transaction Counter (ATC)"));


    emvTagList.append(Tag("6F", "File Control Information (FCI)"));
    emvTagList.append(Tag("06", "Object Identifier (OID)"));
    emvTagList.append(Tag("41", "Country code and national data"));
    emvTagList.append(Tag("42", "Issuer Identification Number (IIN)"));
    emvTagList.append(Tag("43", "Card service data"));
    emvTagList.append(Tag("44", "Initial access data"));
    emvTagList.append(Tag("45", "Card issuer's data"));
    emvTagList.append(Tag("46", "Pre-issuing data"));
    emvTagList.append(Tag("47", "Card capabilities"));
    emvTagList.append(Tag("48", "Status information"));
    emvTagList.append(Tag("4D", "Extended header list"));
    emvTagList.append(Tag("4F", "Application Identifier (ADF Name)"));
    emvTagList.append(Tag("50", "Application Label"));
    emvTagList.append(Tag("51", "Path"));
    emvTagList.append(Tag("52", "Command to perform"));
    emvTagList.append(Tag("53", "Discretionary data, discretionary template"));
    emvTagList.append(Tag("56", "Track 1 Equivalent Data"));
    emvTagList.append(Tag("57", "Track 2 Equivalent Data"));
    emvTagList.append(Tag("58", "Track 3 Equivalent Data"));
    emvTagList.append(Tag("59", "Card expiration date"));
    emvTagList.append(Tag("5A", "Application Primary Account Number (PAN)"));
    emvTagList.append(Tag("5B", "Name of an individual"));
    emvTagList.append(Tag("5C", "Tag list"));
    emvTagList.append(Tag("5E", "Proprietary login data"));
    emvTagList.append(Tag("5F20", "Cardholder Name"));





    emvTagList.append(Tag("5F21", "Track 1, identical to the data coded"));
    emvTagList.append(Tag("5F22", "Track 2, identical to the data coded"));
    emvTagList.append(Tag("5F23", "Track 3, identical to the data coded"));
    emvTagList.append(Tag("5F24", "Application Expiration Date (YYMMDD)"));
    emvTagList.append(Tag("5F25", "Application Effective Date (YYMMDD)"));
    emvTagList.append(Tag("5F26", "Date, Card Effective"));
    emvTagList.append(Tag("5F27", "Interchange control"));
    emvTagList.append(Tag("5F28", "Issuer Country Code"));
    emvTagList.append(Tag("5F29", "Interchange profile"));
    emvTagList.append(Tag("5F2A", "Transaction Currency Code"));
    emvTagList.append(Tag("5F2B", "Date of birth"));
    emvTagList.append(Tag("5F2C", "Cardholder nationality"));
    emvTagList.append(Tag("5F2D", "Language Preference"));
    emvTagList.append(Tag("5F2E", "Cardholder biometric data"));
    emvTagList.append(Tag("5F2F", "PIN usage policy"));
    emvTagList.append(Tag("5F30", "Service Code"));
    emvTagList.append(Tag("5F32", "Transaction counter"));
    emvTagList.append(Tag("5F33", "Date, Transaction"));
    emvTagList.append(Tag("5F34", "Application Primary Account Number (PAN) Sequence Number (PSN)"));
    emvTagList.append(Tag("5F35", "Sex (ISO 5218)"));
    emvTagList.append(Tag("5F36", "Transaction Currency Exponent"));
    emvTagList.append(Tag("5F37", "Static internal authentication (one-step)"));
    emvTagList.append(Tag("5F38", "Static internal authentication - first associated data"));
    emvTagList.append(Tag("5F39", "Static internal authentication - second associated data"));
    emvTagList.append(Tag("5F3A", "Dynamic internal authentication"));
    emvTagList.append(Tag("5F3B", "Dynamic external authentication"));
    emvTagList.append(Tag("5F3C", "Transaction Reference Currency Code"));
    emvTagList.append(Tag("5F3D", "Transaction Reference Currency Exponent"));
    emvTagList.append(Tag("5F40", "Cardholder portrait image"));
    emvTagList.append(Tag("5F41", "Element list"));
    emvTagList.append(Tag("5F42", "Address"));
    emvTagList.append(Tag("5F43", "Cardholder handwritten signature image"));
    emvTagList.append(Tag("5F44", "Application image"));
    emvTagList.append(Tag("5F45", "Display message"));
    emvTagList.append(Tag("5F46", "Timer"));
    emvTagList.append(Tag("5F47", "Message reference"));
    emvTagList.append(Tag("5F48", "Cardholder private key"));
    emvTagList.append(Tag("5F49", "Cardholder public key"));
    emvTagList.append(Tag("5F4A", "Public key of certification authority"));
    emvTagList.append(Tag("5F4C", "Certificate holder authorization"));
    emvTagList.append(Tag("5F4D", "Integrated circuit manufacturer identifier"));
    emvTagList.append(Tag("5F4E", "Certificate content"));
    emvTagList.append(Tag("5F50", "Issuer Uniform Resource Locator (URL)"));
    emvTagList.append(Tag("5F53", "International Bank Account Number (IBAN)"));
    emvTagList.append(Tag("5F54", "Bank Identifier Code (BIC)"));
    emvTagList.append(Tag("5F55", "Issuer Country Code (alpha2 format)"));
    emvTagList.append(Tag("5F56", "Issuer Country Code (alpha3 format)"));
    emvTagList.append(Tag("5F57", "Account Type"));

    emvTagList.append(Tag("60", "Template, Dynamic Authentication"));
    emvTagList.append(Tag("6080", "Commitment"));
    emvTagList.append(Tag("6081", "Challenge"));
    emvTagList.append(Tag("6082", "Response"));
    emvTagList.append(Tag("6083", "Committed challenge"));
    emvTagList.append(Tag("6084", "Authentication code"));
    emvTagList.append(Tag("6085", "Exponential"));
    emvTagList.append(Tag("60A0", "Template, Identification data"));
    emvTagList.append(Tag("61", "Application Template"));
    emvTagList.append(Tag("62", "File Control Parameters (FCP) Template"));
    emvTagList.append(Tag("6280", "Number of data bytes in the file, excluding structural information"));
    emvTagList.append(Tag("6281", "Number of data bytes in the file, including structural information if any"));
    emvTagList.append(Tag("6282", "File descriptor byte"));
    emvTagList.append(Tag("6283", "File identifier"));
    emvTagList.append(Tag("6284", "DF name"));
    emvTagList.append(Tag("6285", "Proprietary information, primitive encoding"));
    emvTagList.append(Tag("6286", "Security attribute in proprietary format"));
    emvTagList.append(Tag("6287", "Identifier of an EF containing an extension of the file control information"));
    emvTagList.append(Tag("6288", "Short EF identifier"));
    emvTagList.append(Tag("628A", "Life cycle status byte (LCS)"));
    emvTagList.append(Tag("628B", "Security attribute referencing the expanded format"));
    emvTagList.append(Tag("628C", "Security attribute in compact format"));
    emvTagList.append(Tag("628D", "Identifier of an EF containing security environment templates"));
    emvTagList.append(Tag("62A0", "Template, Security attribute for data objects"));
    emvTagList.append(Tag("62A1", "Template, Security attribute for physical interfaces"));
    emvTagList.append(Tag("62A2", "One or more pairs of data objects, short EF identifier (tag 88) - absolute or relative path (tag 51)"));
    emvTagList.append(Tag("62A5", "Proprietary information, constructed encoding"));
    emvTagList.append(Tag("62AB", "Security attribute in expanded format"));
    emvTagList.append(Tag("62AC", "Identifier of a cryptographic mechanism"));
    emvTagList.append(Tag("63", "Wrapper"));
    emvTagList.append(Tag("64", "Template, File Management Data (FMD)"));
    emvTagList.append(Tag("65", "Cardholder related data"));
    emvTagList.append(Tag("66", "Template, Card data"));
    emvTagList.append(Tag("67", "Template, Authentication data"));
    emvTagList.append(Tag("68", "Special user requirements"));
    emvTagList.append(Tag("6A", "Template, Login"));
    emvTagList.append(Tag("6A80", "Qualifier"));
    emvTagList.append(Tag("6A81", "Telephone Number"));
    emvTagList.append(Tag("6A82", "Text"));
    emvTagList.append(Tag("6A83", "Delay indicators, for detecting an end of message"));
    emvTagList.append(Tag("6A84", "Delay indicators, for detecting an absence of response"));
    emvTagList.append(Tag("6B", "Template, Qualified name"));
    emvTagList.append(Tag("6B06", "Qualified name"));
    emvTagList.append(Tag("6B80", "Name"));
    emvTagList.append(Tag("6BA0", "Name"));
    emvTagList.append(Tag("6C", "Template, Cardholder image"));
    emvTagList.append(Tag("6D", "Template, Application image"));
    emvTagList.append(Tag("6E", "Application related data"));
    emvTagList.append(Tag("6F", "File Control Information (FCI) Template"));
    emvTagList.append(Tag("6FA5", "Template, FCI A5"));




    emvTagList.append(Tag("70", "READ RECORD Response Message Template"));
    emvTagList.append(Tag("71", "Issuer Script Template 1"));
    emvTagList.append(Tag("7186", "Issuer Script Command"));
    emvTagList.append(Tag("719F18", "Issuer Script Identifier"));
    emvTagList.append(Tag("72", "Issuer Script Template 2"));
    emvTagList.append(Tag("73", "Directory Discretionary Template"));
    emvTagList.append(Tag("77", "Response Message Template Format 2"));
    emvTagList.append(Tag("78", "Compatible Tag Allocation Authority"));
    emvTagList.append(Tag("79", "Coexistent Tag Allocation Authority"));
    emvTagList.append(Tag("7A", "Template, Security Support (SS)"));
    emvTagList.append(Tag("7A80", "Card session counter"));
    emvTagList.append(Tag("7A81", "Session identifier"));
    emvTagList.append(Tag("7A82", "File selection counter"));
    emvTagList.append(Tag("7A83", "File selection counter"));
    emvTagList.append(Tag("7A84", "File selection counter"));
    emvTagList.append(Tag("7A85", "File selection counter"));
    emvTagList.append(Tag("7A86", "File selection counter"));
    emvTagList.append(Tag("7A87", "File selection counter"));
    emvTagList.append(Tag("7A88", "File selection counter"));
    emvTagList.append(Tag("7A89", "File selection counter"));
    emvTagList.append(Tag("7A8A", "File selection counter"));
    emvTagList.append(Tag("7A8B", "File selection counter"));
    emvTagList.append(Tag("7A8C", "File selection counter"));
    emvTagList.append(Tag("7A8D", "File selection counter"));
    emvTagList.append(Tag("7A8E", "File selection counter"));
    emvTagList.append(Tag("7A93", "Digital signature counter"));
    emvTagList.append(Tag("7B", "Template, Security Environment (SE)"));
    emvTagList.append(Tag("7B80", "SEID byte, mandatory"));
    emvTagList.append(Tag("7B8A", "LCS byte, optional"));
    emvTagList.append(Tag("7BA4", "Control reference template (CRT)"));
    emvTagList.append(Tag("7BAA", "Control reference template (CRT)"));
    emvTagList.append(Tag("7BAC", "Cryptographic mechanism identifier template, optional"));
    emvTagList.append(Tag("7BB4", "Control reference template (CRT)"));
    emvTagList.append(Tag("7BB6", "Control reference template (CRT)"));
    emvTagList.append(Tag("7BB8", "Control reference template (CRT)"));
    emvTagList.append(Tag("7D", "Template, Secure Messaging (SM)"));
    emvTagList.append(Tag("7D80", "Plain value not coded in BER-TLV"));
    emvTagList.append(Tag("7D81", "Plain value not coded in BER-TLV"));
    emvTagList.append(Tag("7D82", "Cryptogram (plain value coded in BER-TLV and including secure messaging data objects)"));
    emvTagList.append(Tag("7D83", "Cryptogram (plain value coded in BER-TLV and including secure messaging data objects)"));
    emvTagList.append(Tag("7D84", "Cryptogram (plain value coded in BER-TLV, but not including secure messaging data objects)"));
    emvTagList.append(Tag("7D85", "Cryptogram (plain value coded in BER-TLV, but not including secure messaging data objects)"));
    emvTagList.append(Tag("7D86", "Padding-content indicator byte followed by cryptogram (plain value not coded in BER-TLV)"));
    emvTagList.append(Tag("7D87", "Padding-content indicator byte followed by cryptogram (plain value not coded in BER-TLV)"));
    emvTagList.append(Tag("7D8E", "Cryptographic checksum (at least four bytes)"));
    emvTagList.append(Tag("7D90", "Hash-code"));
    emvTagList.append(Tag("7D91", "Hash-code"));
    emvTagList.append(Tag("7D92", "Certificate (not BER-TLV coded data)"));
    emvTagList.append(Tag("7D93", "Certificate (not BER-TLV coded data)"));
    emvTagList.append(Tag("7D94", "Security environment identifier"));
    emvTagList.append(Tag("7D95", "Security environment identifier"));
    emvTagList.append(Tag("7D96", "Number Le in the unsecured command APDU (one or two bytes)"));
    emvTagList.append(Tag("7D97", "Number Le in the unsecured command APDU (one or two bytes)"));
    emvTagList.append(Tag("7D99", "Processing status of the secured response APDU (new SW1-SW2, two bytes)"));
    emvTagList.append(Tag("7D9A", "Input data element for the computation of a digital signature (the value field is signed)"));
    emvTagList.append(Tag("7D9B", "Input data element for the computation of a digital signature (the value field is signed)"));
    emvTagList.append(Tag("7D9C", "Public key"));
    emvTagList.append(Tag("7D9D", "Public key"));
    emvTagList.append(Tag("7D9E", "Digital signature"));
    emvTagList.append(Tag("7DA0", "Input template for the computation of a hash-code (the template is hashed)"));
    emvTagList.append(Tag("7DA1", "Input template for the computation of a hash-code (the template is hashed)"));
    emvTagList.append(Tag("7DA2", "Input template for the verification of a cryptographic checksum (the template is integrated)"));
    emvTagList.append(Tag("7DA4", "Control reference template for authentication (AT)"));
    emvTagList.append(Tag("7DA5", "Control reference template for authentication (AT)"));
    emvTagList.append(Tag("7DA8", "Input template for the verification of a digital signature (the template is signed)"));
    emvTagList.append(Tag("7DAA", "Template, Control reference for hash-code (HT)"));
    emvTagList.append(Tag("7DAB", "Template, Control reference for hash-code (HT)"));
    emvTagList.append(Tag("7DAC", "Input template for the computation of a digital signature (the concatenated value fields are signed)"));
    emvTagList.append(Tag("7DAD", "Input template for the computation of a digital signature (the concatenated value fields are signed)"));
    emvTagList.append(Tag("7DAE", "Input template for the computation of a certificate (the concatenated value fields are certified)"));
    emvTagList.append(Tag("7DAF", "Input template for the computation of a certificate (the concatenated value fields are certified)"));
    emvTagList.append(Tag("7DB0", "Plain value coded in BER-TLV and including secure messaging data objects"));
    emvTagList.append(Tag("7DB1", "Plain value coded in BER-TLV and including secure messaging data objects"));
    emvTagList.append(Tag("7DB2", "Plain value coded in BER-TLV, but not including secure messaging data objects"));
    emvTagList.append(Tag("7DB3", "Plain value coded in BER-TLV, but not including secure messaging data objects"));
    emvTagList.append(Tag("7DB4", "Control reference template for cryptographic checksum (CCT)"));
    emvTagList.append(Tag("7DB5", "Control reference template for cryptographic checksum (CCT)"));
    emvTagList.append(Tag("7DB6", "Control reference template for digital signature (DST)"));
    emvTagList.append(Tag("7DB7", "Control reference template for digital signature (DST)"));
    emvTagList.append(Tag("7DB8", "Control reference template for confidentiality (CT)"));
    emvTagList.append(Tag("7DB9", "Control reference template for confidentiality (CT)"));
    emvTagList.append(Tag("7DBA", "Response descriptor template"));
    emvTagList.append(Tag("7DBB", "Response descriptor template"));
    emvTagList.append(Tag("7DBC", "Input template for the computation of a digital signature (the template is signed)"));
    emvTagList.append(Tag("7DBD", "Input template for the computation of a digital signature (the template is signed)"));
    emvTagList.append(Tag("7DBE", "Input template for the verification of a certificate (the template is certified)"));
    emvTagList.append(Tag("7E", "Template, Nesting Interindustry data objects"));
    emvTagList.append(Tag("7F20", "Display control template"));
    emvTagList.append(Tag("7F21", "Cardholder certificate"));
    emvTagList.append(Tag("7F2E", "Biometric data template"));


    emvTagList.append(Tag("7F49", "Template, Cardholder public key"));
    emvTagList.append(Tag("7F4980", "Algorithm reference as used in control reference data objects for secure messaging"));
    emvTagList.append(Tag("7F4981", "RSA Modulus"));
    emvTagList.append(Tag("7F4982", "RSA Public exponent"));
    emvTagList.append(Tag("7F4983", "DSA Basis"));
    emvTagList.append(Tag("7F4984", "DSA Public key"));
    emvTagList.append(Tag("7F4985", "ECDSA Order"));
    emvTagList.append(Tag("7F4986", "ECDSA Public key"));
    emvTagList.append(Tag("7F4C", "Template, Certificate Holder Authorization"));
    emvTagList.append(Tag("7F4E", "Certificate Body"));
    emvTagList.append(Tag("7F4E42", "Certificate Authority Reference"));
    emvTagList.append(Tag("7F4E65", "Certificate Extensions"));



    emvTagList.append(Tag("80", "Response Message Template Format 1"));
    emvTagList.append(Tag("81", "Amount, Authorised (Binary)"));
    emvTagList.append(Tag("82", "Application Interchange Profile (AIP)"));
    emvTagList.append(Tag("83", "Command Template"));
    emvTagList.append(Tag("84", "Dedicated File (DF) Name"));
    emvTagList.append(Tag("86", "Issuer Script Command"));
    emvTagList.append(Tag("87", "Application Priority Indicator"));
    emvTagList.append(Tag("88", "Short File Identifier (SFI)"));
    emvTagList.append(Tag("89", "Authorisation Code"));
    emvTagList.append(Tag("8A", "Authorisation Response Code (ARC)"));
    emvTagList.append(Tag("8C", "Card Risk Management Data Object List 1 (CDOL1)"));
    emvTagList.append(Tag("8D", "Card Risk Management Data Object List 2 (CDOL2)"));
    emvTagList.append(Tag("8E", "Cardholder Verification Method (CVM) List"));
    emvTagList.append(Tag("8F", "Certification Authority Public Key Index (PKI)"));
    emvTagList.append(Tag("90", "Issuer Public Key Certificate"));
    emvTagList.append(Tag("91", "Issuer Authentication Data"));
    emvTagList.append(Tag("92", "Issuer Public Key Remainder"));
    emvTagList.append(Tag("93", "Signed Static Application Data (SAD)"));
    emvTagList.append(Tag("94", "Application File Locator (AFL)"));
    emvTagList.append(Tag("95", "Terminal Verification Results (TVR)"));
    emvTagList.append(Tag("97", "Transaction Certificate Data Object List (TDOL)"));
    emvTagList.append(Tag("98", "Transaction Certificate (TC) Hash Value"));
    emvTagList.append(Tag("99", "Transaction Personal Identification Number (PIN) Data"));
    emvTagList.append(Tag("9A", "Transaction Date (YYMMDD)"));
    emvTagList.append(Tag("9B", "Transaction Status Information (TSI)"));
    emvTagList.append(Tag("9C", "Transaction Type"));
    emvTagList.append(Tag("9D", "Directory Definition File (DDF) Name"));




    emvTagList.append(Tag("9F05", "Application Discretionary Data"));
    emvTagList.append(Tag("9F06", "Application Identifier (AID), Terminal"));
    emvTagList.append(Tag("9F07", "Application Usage Control (AUC)"));
    emvTagList.append(Tag("9F08", "Application Version Number"));
    emvTagList.append(Tag("9F09", "Application Version Number"));
    emvTagList.append(Tag("9F0A", "Application Selection Registered Proprietary Data"));
    emvTagList.append(Tag("9F0B", "Cardholder Name - Extended"));
    emvTagList.append(Tag("9F0D", "Issuer Action Code - Default"));
    emvTagList.append(Tag("9F0E", "Issuer Action Code - Denial"));
    emvTagList.append(Tag("9F0F", "Issuer Action Code - Online"));
    emvTagList.append(Tag("9F10", "Issuer Application Data (IAD)"));
    emvTagList.append(Tag("9F11", "Issuer Code Table Index"));
    emvTagList.append(Tag("9F12", "Application Preferred Name"));
    emvTagList.append(Tag("9F13", "Last Online Application Transaction Counter (ATC) Register"));
    emvTagList.append(Tag("9F14", "Lower Consecutive Offline Limit (LCOL)"));
    emvTagList.append(Tag("9F15", "Merchant Category Code (MCC)"));
    emvTagList.append(Tag("9F16", "Merchant Identifier"));
    emvTagList.append(Tag("9F17", "Personal Identification Number (PIN) Try Counter"));
    emvTagList.append(Tag("9F18", "Issuer Script Identifier"));
    emvTagList.append(Tag("9F19", "Token Requestor ID"));
    emvTagList.append(Tag("9F1A", "Terminal Country Code"));
    emvTagList.append(Tag("9F1B", "Terminal Floor Limit"));
    emvTagList.append(Tag("9F1C", "Terminal Identification"));
    emvTagList.append(Tag("9F1D", "Terminal Risk Management Data"));
    emvTagList.append(Tag("9F1E", "Interface Device (IFD) Serial Number"));
    emvTagList.append(Tag("9F1F", "Track 1 Discretionary Data"));
    emvTagList.append(Tag("9F20", "Track 2 Discretionary Data"));
    emvTagList.append(Tag("9F21", "Transaction Time"));
    emvTagList.append(Tag("9F22", "Public Key Index, Certification Authority, Terminal"));
    emvTagList.append(Tag("9F23", "Upper Consecutive Offline Limit (UCOL)"));
    emvTagList.append(Tag("9F24", "Payment Account Reference (PAR)"));
    emvTagList.append(Tag("9F25", "Last 4 Digits of PAN"));




    emvTagList.append(Tag("9F26", "Application Cryptogram (AC)"));
    emvTagList.append(Tag("9F27", "Cryptogram Information Data (CID)"));
    emvTagList.append(Tag("9F29", "Extended Selection"));
    emvTagList.append(Tag("9F2A", "Kernel Identifier"));
    emvTagList.append(Tag("9F2D", "Integrated Circuit Card (ICC) PIN Encipherment Public Key Certificate"));
    emvTagList.append(Tag("9F2E", "Integrated Circuit Card (ICC) PIN Encipherment Public Key Exponent"));
    emvTagList.append(Tag("9F2F", "Integrated Circuit Card (ICC) PIN Encipherment Public Key Remainder"));
    emvTagList.append(Tag("9F32", "Issuer Public Key Exponent"));
    emvTagList.append(Tag("9F33", "Terminal Capabilities"));
    emvTagList.append(Tag("9F34", "Cardholder Verification Method (CVM) Results"));
    emvTagList.append(Tag("9F35", "Terminal Type"));
    emvTagList.append(Tag("9F36", "Application Transaction Counter (ATC)"));
    emvTagList.append(Tag("9F37", "Unpredictable Number (UN)"));
    emvTagList.append(Tag("9F38", "Processing Options Data Object List (PDOL)"));
    emvTagList.append(Tag("9F39", "Point-of-Service (POS) Entry Mode"));
    emvTagList.append(Tag("9F3A", "Amount, Reference Currency (Binary)"));
    emvTagList.append(Tag("9F3B", "Currency Code, Application Reference"));
    emvTagList.append(Tag("9F3C", "Currency Code, Transaction Reference"));
    emvTagList.append(Tag("9F3D", "Currency Exponent, Transaction Reference"));
    emvTagList.append(Tag("9F40", "Additional Terminal Capabilities"));
    emvTagList.append(Tag("9F41", "Transaction Sequence Counter"));
    emvTagList.append(Tag("9F42", "Currency Code, Application"));
    emvTagList.append(Tag("9F43", "Currency Exponent, Application Reference"));
    emvTagList.append(Tag("9F44", "Currency Exponent, Application"));
    emvTagList.append(Tag("9F45", "Data Authentication Code"));
    emvTagList.append(Tag("9F46", "Integrated Circuit Card (ICC) Public Key Certificate"));
    emvTagList.append(Tag("9F47", "Integrated Circuit Card (ICC) Public Key Exponent"));
    emvTagList.append(Tag("9F48", "Integrated Circuit Card (ICC) Public Key Remainder"));
    emvTagList.append(Tag("9F49", "Dynamic Data Authentication Data Object List (DDOL)"));
    emvTagList.append(Tag("9F4A", "Static Data Authentication Tag List (SDA)"));
    emvTagList.append(Tag("9F4B", "Signed Dynamic Application Data (SDAD)"));
    emvTagList.append(Tag("9F4C", "ICC Dynamic Number"));
    emvTagList.append(Tag("9F4D", "Log Entry"));
    emvTagList.append(Tag("9F4E", "Merchant Name and Location"));
    emvTagList.append(Tag("9F4F", "Log Format"));
    emvTagList.append(Tag("9F50", "Cardholder Verification Status"));
    emvTagList.append(Tag("9F51", "Application Currency Code"));
    emvTagList.append(Tag("9F52", "Application Default Action (ADA)"));
    emvTagList.append(Tag("9F53", "Consecutive Transaction Counter International Limit (CTCIL)"));
    emvTagList.append(Tag("9F54", "Cumulative Total Transaction Amount Limit (CTTAL)"));
    emvTagList.append(Tag("9F55", "Geographic Indicator"));
    emvTagList.append(Tag("9F56", "Issuer Authentication Indicator"));
    emvTagList.append(Tag("9F57", "Issuer Country Code"));
    emvTagList.append(Tag("9F58", "Consecutive Transaction Counter Limit (CTCL)"));
    emvTagList.append(Tag("9F59", "Consecutive Transaction Counter Upper Limit (CTCUL)"));
    emvTagList.append(Tag("9F5A", "Application Program Identifier (Program ID)"));
    emvTagList.append(Tag("9F5B", "Issuer Script Results"));
    emvTagList.append(Tag("9F5C", "Cumulative Total Transaction Amount Upper Limit (CTTAUL)"));
    emvTagList.append(Tag("9F5D", "Available Offline Spending Amount (AOSA)"));
    emvTagList.append(Tag("9F5E", "Consecutive Transaction International Upper Limit (CTIUL)"));
    emvTagList.append(Tag("9F5F", "DS Slot Availability"));
    emvTagList.append(Tag("9F60", "CVC3 (Track1)"));
    emvTagList.append(Tag("9F61", "CVC3 (Track2)"));
    emvTagList.append(Tag("9F62", "PCVC3 (Track1)"));
    emvTagList.append(Tag("9F63", "Offline Counter Initial Value"));
    emvTagList.append(Tag("9F64", "NATC (Track1)"));
    emvTagList.append(Tag("9F65", "PCVC3 (Track2)"));
    emvTagList.append(Tag("9F66", "Terminal Transaction Qualifiers (TTQ)"));
    emvTagList.append(Tag("9F67", "MSD Offset"));
    emvTagList.append(Tag("9F68", "Card Additional Processes"));
    emvTagList.append(Tag("9F69", "Card Authentication Related Data"));
    emvTagList.append(Tag("9F6A", "Unpredictable Number (Numeric)"));
    emvTagList.append(Tag("9F6B", "Card CVM Limit"));
    emvTagList.append(Tag("9F6C", "Card Transaction Qualifiers (CTQ)"));
    emvTagList.append(Tag("9F6D", "VLP Reset Threshold"));
    emvTagList.append(Tag("9F6E", "Third Party Data / Form Factor Indicator"));
    emvTagList.append(Tag("9F6F", "DS Slot Management Control"));
    emvTagList.append(Tag("9F70", "Protected Data Envelope 1"));
    emvTagList.append(Tag("9F71", "Protected Data Envelope 2"));
    emvTagList.append(Tag("9F72", "Protected Data Envelope 3"));
    emvTagList.append(Tag("9F73", "Protected Data Envelope 4"));
    emvTagList.append(Tag("9F74", "Protected Data Envelope 5"));
    emvTagList.append(Tag("9F75", "Unprotected Data Envelope 1"));
    emvTagList.append(Tag("9F76", "Unprotected Data Envelope 2"));
    emvTagList.append(Tag("9F77", "Unprotected Data Envelope 3"));
    emvTagList.append(Tag("9F78", "Unprotected Data Envelope 4"));
    emvTagList.append(Tag("9F79", "Unprotected Data Envelope 5"));
    emvTagList.append(Tag("9F7A", "VLP Terminal Support Indicator"));
    emvTagList.append(Tag("9F7B", "VLP Terminal Transaction Limit"));
    emvTagList.append(Tag("9F7C", "Customer Exclusive Data (CED)"));
    emvTagList.append(Tag("9F7D", "DS Summary 1"));
    emvTagList.append(Tag("9F7E", "Mobile Support Indicator"));
    emvTagList.append(Tag("9F7F", "DS Unpredictable Number"));
    emvTagList.append(Tag("A5", "File Control Information (FCI) Proprietary Template"));

}

QList<Tag> EmvTagList::getTags() const {
    return emvTagList;
}
