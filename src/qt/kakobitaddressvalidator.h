// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KAKOBIT_QT_KAKOBITADDRESSVALIDATOR_H
#define KAKOBIT_QT_KAKOBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class KakobitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KakobitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Kakobit address widget validator, checks for a valid kakobit address.
 */
class KakobitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KakobitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // KAKOBIT_QT_KAKOBITADDRESSVALIDATOR_H
