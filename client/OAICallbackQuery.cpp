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

#include "OAICallbackQuery.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAICallbackQuery::OAICallbackQuery(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICallbackQuery::OAICallbackQuery() {
    this->initializeModel();
}

OAICallbackQuery::~OAICallbackQuery() {}

void OAICallbackQuery::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_from_isSet = false;
    m_from_isValid = false;

    m_chat_instance_isSet = false;
    m_chat_instance_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;

    m_inline_message_id_isSet = false;
    m_inline_message_id_isValid = false;

    m_data_isSet = false;
    m_data_isValid = false;

    m_game_short_name_isSet = false;
    m_game_short_name_isValid = false;
}

void OAICallbackQuery::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICallbackQuery::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_from_isValid = ::tele_rest::fromJsonValue(m_from, json[QString("from")]);
    m_from_isSet = !json[QString("from")].isNull() && m_from_isValid;

    m_chat_instance_isValid = ::tele_rest::fromJsonValue(m_chat_instance, json[QString("chat_instance")]);
    m_chat_instance_isSet = !json[QString("chat_instance")].isNull() && m_chat_instance_isValid;

    m_message_isValid = ::tele_rest::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;

    m_inline_message_id_isValid = ::tele_rest::fromJsonValue(m_inline_message_id, json[QString("inline_message_id")]);
    m_inline_message_id_isSet = !json[QString("inline_message_id")].isNull() && m_inline_message_id_isValid;

    m_data_isValid = ::tele_rest::fromJsonValue(m_data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_game_short_name_isValid = ::tele_rest::fromJsonValue(m_game_short_name, json[QString("game_short_name")]);
    m_game_short_name_isSet = !json[QString("game_short_name")].isNull() && m_game_short_name_isValid;
}

QString OAICallbackQuery::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICallbackQuery::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_from.isSet()) {
        obj.insert(QString("from"), ::tele_rest::toJsonValue(m_from));
    }
    if (m_chat_instance_isSet) {
        obj.insert(QString("chat_instance"), ::tele_rest::toJsonValue(m_chat_instance));
    }
    if (m_message.isSet()) {
        obj.insert(QString("message"), ::tele_rest::toJsonValue(m_message));
    }
    if (m_inline_message_id_isSet) {
        obj.insert(QString("inline_message_id"), ::tele_rest::toJsonValue(m_inline_message_id));
    }
    if (m_data_isSet) {
        obj.insert(QString("data"), ::tele_rest::toJsonValue(m_data));
    }
    if (m_game_short_name_isSet) {
        obj.insert(QString("game_short_name"), ::tele_rest::toJsonValue(m_game_short_name));
    }
    return obj;
}

QString OAICallbackQuery::getId() const {
    return m_id;
}
void OAICallbackQuery::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAICallbackQuery::is_id_Set() const{
    return m_id_isSet;
}

bool OAICallbackQuery::is_id_Valid() const{
    return m_id_isValid;
}

OAIUser OAICallbackQuery::getFrom() const {
    return m_from;
}
void OAICallbackQuery::setFrom(const OAIUser &from) {
    m_from = from;
    m_from_isSet = true;
}

bool OAICallbackQuery::is_from_Set() const{
    return m_from_isSet;
}

bool OAICallbackQuery::is_from_Valid() const{
    return m_from_isValid;
}

QString OAICallbackQuery::getChatInstance() const {
    return m_chat_instance;
}
void OAICallbackQuery::setChatInstance(const QString &chat_instance) {
    m_chat_instance = chat_instance;
    m_chat_instance_isSet = true;
}

bool OAICallbackQuery::is_chat_instance_Set() const{
    return m_chat_instance_isSet;
}

bool OAICallbackQuery::is_chat_instance_Valid() const{
    return m_chat_instance_isValid;
}

OAIMaybeInaccessibleMessage OAICallbackQuery::getMessage() const {
    return m_message;
}
void OAICallbackQuery::setMessage(const OAIMaybeInaccessibleMessage &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAICallbackQuery::is_message_Set() const{
    return m_message_isSet;
}

bool OAICallbackQuery::is_message_Valid() const{
    return m_message_isValid;
}

QString OAICallbackQuery::getInlineMessageId() const {
    return m_inline_message_id;
}
void OAICallbackQuery::setInlineMessageId(const QString &inline_message_id) {
    m_inline_message_id = inline_message_id;
    m_inline_message_id_isSet = true;
}

bool OAICallbackQuery::is_inline_message_id_Set() const{
    return m_inline_message_id_isSet;
}

bool OAICallbackQuery::is_inline_message_id_Valid() const{
    return m_inline_message_id_isValid;
}

QString OAICallbackQuery::getData() const {
    return m_data;
}
void OAICallbackQuery::setData(const QString &data) {
    m_data = data;
    m_data_isSet = true;
}

bool OAICallbackQuery::is_data_Set() const{
    return m_data_isSet;
}

bool OAICallbackQuery::is_data_Valid() const{
    return m_data_isValid;
}

QString OAICallbackQuery::getGameShortName() const {
    return m_game_short_name;
}
void OAICallbackQuery::setGameShortName(const QString &game_short_name) {
    m_game_short_name = game_short_name;
    m_game_short_name_isSet = true;
}

bool OAICallbackQuery::is_game_short_name_Set() const{
    return m_game_short_name_isSet;
}

bool OAICallbackQuery::is_game_short_name_Valid() const{
    return m_game_short_name_isValid;
}

bool OAICallbackQuery::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_from.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_instance_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_inline_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_data_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_game_short_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICallbackQuery::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_from_isValid && m_chat_instance_isValid && true;
}

} // namespace tele_rest
