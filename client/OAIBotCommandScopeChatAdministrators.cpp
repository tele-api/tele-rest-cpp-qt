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

#include "OAIBotCommandScopeChatAdministrators.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIBotCommandScopeChatAdministrators::OAIBotCommandScopeChatAdministrators(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBotCommandScopeChatAdministrators::OAIBotCommandScopeChatAdministrators() {
    this->initializeModel();
}

OAIBotCommandScopeChatAdministrators::~OAIBotCommandScopeChatAdministrators() {}

void OAIBotCommandScopeChatAdministrators::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;
}

void OAIBotCommandScopeChatAdministrators::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBotCommandScopeChatAdministrators::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;
}

QString OAIBotCommandScopeChatAdministrators::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBotCommandScopeChatAdministrators::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    return obj;
}

QString OAIBotCommandScopeChatAdministrators::getType() const {
    return m_type;
}
void OAIBotCommandScopeChatAdministrators::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIBotCommandScopeChatAdministrators::is_type_Set() const{
    return m_type_isSet;
}

bool OAIBotCommandScopeChatAdministrators::is_type_Valid() const{
    return m_type_isValid;
}

OAI_restrictChatMember_post_request_chat_id OAIBotCommandScopeChatAdministrators::getChatId() const {
    return m_chat_id;
}
void OAIBotCommandScopeChatAdministrators::setChatId(const OAI_restrictChatMember_post_request_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAIBotCommandScopeChatAdministrators::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAIBotCommandScopeChatAdministrators::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

bool OAIBotCommandScopeChatAdministrators::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBotCommandScopeChatAdministrators::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_chat_id_isValid && true;
}

} // namespace tele_rest
