/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIStarTransaction.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIStarTransaction::OAIStarTransaction(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStarTransaction::OAIStarTransaction() {
    this->initializeModel();
}

OAIStarTransaction::~OAIStarTransaction() {}

void OAIStarTransaction::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_amount_isSet = false;
    m_amount_isValid = false;

    m_date_isSet = false;
    m_date_isValid = false;

    m_nanostar_amount_isSet = false;
    m_nanostar_amount_isValid = false;

    m_source_isSet = false;
    m_source_isValid = false;

    m_receiver_isSet = false;
    m_receiver_isValid = false;
}

void OAIStarTransaction::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStarTransaction::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_amount_isValid = ::tele_rest::fromJsonValue(m_amount, json[QString("amount")]);
    m_amount_isSet = !json[QString("amount")].isNull() && m_amount_isValid;

    m_date_isValid = ::tele_rest::fromJsonValue(m_date, json[QString("date")]);
    m_date_isSet = !json[QString("date")].isNull() && m_date_isValid;

    m_nanostar_amount_isValid = ::tele_rest::fromJsonValue(m_nanostar_amount, json[QString("nanostar_amount")]);
    m_nanostar_amount_isSet = !json[QString("nanostar_amount")].isNull() && m_nanostar_amount_isValid;

    m_source_isValid = ::tele_rest::fromJsonValue(m_source, json[QString("source")]);
    m_source_isSet = !json[QString("source")].isNull() && m_source_isValid;

    m_receiver_isValid = ::tele_rest::fromJsonValue(m_receiver, json[QString("receiver")]);
    m_receiver_isSet = !json[QString("receiver")].isNull() && m_receiver_isValid;
}

QString OAIStarTransaction::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStarTransaction::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_amount_isSet) {
        obj.insert(QString("amount"), ::tele_rest::toJsonValue(m_amount));
    }
    if (m_date_isSet) {
        obj.insert(QString("date"), ::tele_rest::toJsonValue(m_date));
    }
    if (m_nanostar_amount_isSet) {
        obj.insert(QString("nanostar_amount"), ::tele_rest::toJsonValue(m_nanostar_amount));
    }
    if (m_source.isSet()) {
        obj.insert(QString("source"), ::tele_rest::toJsonValue(m_source));
    }
    if (m_receiver.isSet()) {
        obj.insert(QString("receiver"), ::tele_rest::toJsonValue(m_receiver));
    }
    return obj;
}

QString OAIStarTransaction::getId() const {
    return m_id;
}
void OAIStarTransaction::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIStarTransaction::is_id_Set() const{
    return m_id_isSet;
}

bool OAIStarTransaction::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAIStarTransaction::getAmount() const {
    return m_amount;
}
void OAIStarTransaction::setAmount(const qint32 &amount) {
    m_amount = amount;
    m_amount_isSet = true;
}

bool OAIStarTransaction::is_amount_Set() const{
    return m_amount_isSet;
}

bool OAIStarTransaction::is_amount_Valid() const{
    return m_amount_isValid;
}

qint32 OAIStarTransaction::getDate() const {
    return m_date;
}
void OAIStarTransaction::setDate(const qint32 &date) {
    m_date = date;
    m_date_isSet = true;
}

bool OAIStarTransaction::is_date_Set() const{
    return m_date_isSet;
}

bool OAIStarTransaction::is_date_Valid() const{
    return m_date_isValid;
}

qint32 OAIStarTransaction::getNanostarAmount() const {
    return m_nanostar_amount;
}
void OAIStarTransaction::setNanostarAmount(const qint32 &nanostar_amount) {
    m_nanostar_amount = nanostar_amount;
    m_nanostar_amount_isSet = true;
}

bool OAIStarTransaction::is_nanostar_amount_Set() const{
    return m_nanostar_amount_isSet;
}

bool OAIStarTransaction::is_nanostar_amount_Valid() const{
    return m_nanostar_amount_isValid;
}

OAITransactionPartner OAIStarTransaction::getSource() const {
    return m_source;
}
void OAIStarTransaction::setSource(const OAITransactionPartner &source) {
    m_source = source;
    m_source_isSet = true;
}

bool OAIStarTransaction::is_source_Set() const{
    return m_source_isSet;
}

bool OAIStarTransaction::is_source_Valid() const{
    return m_source_isValid;
}

OAITransactionPartner OAIStarTransaction::getReceiver() const {
    return m_receiver;
}
void OAIStarTransaction::setReceiver(const OAITransactionPartner &receiver) {
    m_receiver = receiver;
    m_receiver_isSet = true;
}

bool OAIStarTransaction::is_receiver_Set() const{
    return m_receiver_isSet;
}

bool OAIStarTransaction::is_receiver_Valid() const{
    return m_receiver_isValid;
}

bool OAIStarTransaction::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_amount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nanostar_amount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_source.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_receiver.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIStarTransaction::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_amount_isValid && m_date_isValid && true;
}

} // namespace tele_rest
