// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KGLDCOIN_QT_KGLDCOINADDRESSVALIDATOR_H
#define KGLDCOIN_QT_KGLDCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class KazuGoldAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KazuGoldAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** KazuGold address widget validator, checks for a valid kazugold address.
 */
class KazuGoldAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KazuGoldAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // KGLDCOIN_QT_KGLDCOINADDRESSVALIDATOR_H
