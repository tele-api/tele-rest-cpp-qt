/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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

#include "OAIChatBoost.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatBoost::OAIChatBoost(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatBoost::OAIChatBoost() {
    this->initializeModel();
}

OAIChatBoost::~OAIChatBoost() {}

void OAIChatBoost::initializeModel() {

    m_boost_id_isSet = false;
    m_boost_id_isValid = false;

    m_add_date_isSet = false;
    m_add_date_isValid = false;

    m_expiration_date_isSet = false;
    m_expiration_date_isValid = false;

    m_source_isSet = false;
    m_source_isValid = false;
}

void OAIChatBoost::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatBoost::fromJsonObject(QJsonObject json) {

    m_boost_id_isValid = ::tele_rest::fromJsonValue(m_boost_id, json[QString("boost_id")]);
    m_boost_id_isSet = !json[QString("boost_id")].isNull() && m_boost_id_isValid;

    m_add_date_isValid = ::tele_rest::fromJsonValue(m_add_date, json[QString("add_date")]);
    m_add_date_isSet = !json[QString("add_date")].isNull() && m_add_date_isValid;

    m_expiration_date_isValid = ::tele_rest::fromJsonValue(m_expiration_date, json[QString("expiration_date")]);
    m_expiration_date_isSet = !json[QString("expiration_date")].isNull() && m_expiration_date_isValid;

    m_source_isValid = ::tele_rest::fromJsonValue(m_source, json[QString("source")]);
    m_source_isSet = !json[QString("source")].isNull() && m_source_isValid;
}

QString OAIChatBoost::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatBoost::asJsonObject() const {
    QJsonObject obj;
    if (m_boost_id_isSet) {
        obj.insert(QString("boost_id"), ::tele_rest::toJsonValue(m_boost_id));
    }
    if (m_add_date_isSet) {
        obj.insert(QString("add_date"), ::tele_rest::toJsonValue(m_add_date));
    }
    if (m_expiration_date_isSet) {
        obj.insert(QString("expiration_date"), ::tele_rest::toJsonValue(m_expiration_date));
    }
    if (m_source.isSet()) {
        obj.insert(QString("source"), ::tele_rest::toJsonValue(m_source));
    }
    return obj;
}

QString OAIChatBoost::getBoostId() const {
    return m_boost_id;
}
void OAIChatBoost::setBoostId(const QString &boost_id) {
    m_boost_id = boost_id;
    m_boost_id_isSet = true;
}

bool OAIChatBoost::is_boost_id_Set() const{
    return m_boost_id_isSet;
}

bool OAIChatBoost::is_boost_id_Valid() const{
    return m_boost_id_isValid;
}

qint32 OAIChatBoost::getAddDate() const {
    return m_add_date;
}
void OAIChatBoost::setAddDate(const qint32 &add_date) {
    m_add_date = add_date;
    m_add_date_isSet = true;
}

bool OAIChatBoost::is_add_date_Set() const{
    return m_add_date_isSet;
}

bool OAIChatBoost::is_add_date_Valid() const{
    return m_add_date_isValid;
}

qint32 OAIChatBoost::getExpirationDate() const {
    return m_expiration_date;
}
void OAIChatBoost::setExpirationDate(const qint32 &expiration_date) {
    m_expiration_date = expiration_date;
    m_expiration_date_isSet = true;
}

bool OAIChatBoost::is_expiration_date_Set() const{
    return m_expiration_date_isSet;
}

bool OAIChatBoost::is_expiration_date_Valid() const{
    return m_expiration_date_isValid;
}

OAIChatBoostSource OAIChatBoost::getSource() const {
    return m_source;
}
void OAIChatBoost::setSource(const OAIChatBoostSource &source) {
    m_source = source;
    m_source_isSet = true;
}

bool OAIChatBoost::is_source_Set() const{
    return m_source_isSet;
}

bool OAIChatBoost::is_source_Valid() const{
    return m_source_isValid;
}

bool OAIChatBoost::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_boost_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_add_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expiration_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_source.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatBoost::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_boost_id_isValid && m_add_date_isValid && m_expiration_date_isValid && m_source_isValid && true;
}

} // namespace tele_rest
