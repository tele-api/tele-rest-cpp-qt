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

#include "OAIResponseParameters.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIResponseParameters::OAIResponseParameters(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseParameters::OAIResponseParameters() {
    this->initializeModel();
}

OAIResponseParameters::~OAIResponseParameters() {}

void OAIResponseParameters::initializeModel() {

    m_migrate_to_chat_id_isSet = false;
    m_migrate_to_chat_id_isValid = false;

    m_retry_after_isSet = false;
    m_retry_after_isValid = false;
}

void OAIResponseParameters::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponseParameters::fromJsonObject(QJsonObject json) {

    m_migrate_to_chat_id_isValid = ::tele_rest::fromJsonValue(m_migrate_to_chat_id, json[QString("migrate_to_chat_id")]);
    m_migrate_to_chat_id_isSet = !json[QString("migrate_to_chat_id")].isNull() && m_migrate_to_chat_id_isValid;

    m_retry_after_isValid = ::tele_rest::fromJsonValue(m_retry_after, json[QString("retry_after")]);
    m_retry_after_isSet = !json[QString("retry_after")].isNull() && m_retry_after_isValid;
}

QString OAIResponseParameters::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponseParameters::asJsonObject() const {
    QJsonObject obj;
    if (m_migrate_to_chat_id_isSet) {
        obj.insert(QString("migrate_to_chat_id"), ::tele_rest::toJsonValue(m_migrate_to_chat_id));
    }
    if (m_retry_after_isSet) {
        obj.insert(QString("retry_after"), ::tele_rest::toJsonValue(m_retry_after));
    }
    return obj;
}

qint32 OAIResponseParameters::getMigrateToChatId() const {
    return m_migrate_to_chat_id;
}
void OAIResponseParameters::setMigrateToChatId(const qint32 &migrate_to_chat_id) {
    m_migrate_to_chat_id = migrate_to_chat_id;
    m_migrate_to_chat_id_isSet = true;
}

bool OAIResponseParameters::is_migrate_to_chat_id_Set() const{
    return m_migrate_to_chat_id_isSet;
}

bool OAIResponseParameters::is_migrate_to_chat_id_Valid() const{
    return m_migrate_to_chat_id_isValid;
}

qint32 OAIResponseParameters::getRetryAfter() const {
    return m_retry_after;
}
void OAIResponseParameters::setRetryAfter(const qint32 &retry_after) {
    m_retry_after = retry_after;
    m_retry_after_isSet = true;
}

bool OAIResponseParameters::is_retry_after_Set() const{
    return m_retry_after_isSet;
}

bool OAIResponseParameters::is_retry_after_Valid() const{
    return m_retry_after_isValid;
}

bool OAIResponseParameters::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_migrate_to_chat_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_retry_after_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResponseParameters::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
