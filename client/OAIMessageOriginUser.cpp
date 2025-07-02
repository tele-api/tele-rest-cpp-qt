/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIMessageOriginUser.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIMessageOriginUser::OAIMessageOriginUser(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageOriginUser::OAIMessageOriginUser() {
    this->initializeModel();
}

OAIMessageOriginUser::~OAIMessageOriginUser() {}

void OAIMessageOriginUser::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_date_isSet = false;
    m_date_isValid = false;

    m_sender_user_isSet = false;
    m_sender_user_isValid = false;
}

void OAIMessageOriginUser::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageOriginUser::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_date_isValid = ::tele_rest::fromJsonValue(m_date, json[QString("date")]);
    m_date_isSet = !json[QString("date")].isNull() && m_date_isValid;

    m_sender_user_isValid = ::tele_rest::fromJsonValue(m_sender_user, json[QString("sender_user")]);
    m_sender_user_isSet = !json[QString("sender_user")].isNull() && m_sender_user_isValid;
}

QString OAIMessageOriginUser::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageOriginUser::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_date_isSet) {
        obj.insert(QString("date"), ::tele_rest::toJsonValue(m_date));
    }
    if (m_sender_user.isSet()) {
        obj.insert(QString("sender_user"), ::tele_rest::toJsonValue(m_sender_user));
    }
    return obj;
}

QString OAIMessageOriginUser::getType() const {
    return m_type;
}
void OAIMessageOriginUser::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIMessageOriginUser::is_type_Set() const{
    return m_type_isSet;
}

bool OAIMessageOriginUser::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIMessageOriginUser::getDate() const {
    return m_date;
}
void OAIMessageOriginUser::setDate(const qint32 &date) {
    m_date = date;
    m_date_isSet = true;
}

bool OAIMessageOriginUser::is_date_Set() const{
    return m_date_isSet;
}

bool OAIMessageOriginUser::is_date_Valid() const{
    return m_date_isValid;
}

OAIUser OAIMessageOriginUser::getSenderUser() const {
    return m_sender_user;
}
void OAIMessageOriginUser::setSenderUser(const OAIUser &sender_user) {
    m_sender_user = sender_user;
    m_sender_user_isSet = true;
}

bool OAIMessageOriginUser::is_sender_user_Set() const{
    return m_sender_user_isSet;
}

bool OAIMessageOriginUser::is_sender_user_Valid() const{
    return m_sender_user_isValid;
}

bool OAIMessageOriginUser::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sender_user.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageOriginUser::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_date_isValid && m_sender_user_isValid && true;
}

} // namespace tele_rest
