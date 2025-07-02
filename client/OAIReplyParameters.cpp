/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAIReplyParameters.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIReplyParameters::OAIReplyParameters(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIReplyParameters::OAIReplyParameters() {
    this->initializeModel();
}

OAIReplyParameters::~OAIReplyParameters() {}

void OAIReplyParameters::initializeModel() {

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_allow_sending_without_reply_isSet = false;
    m_allow_sending_without_reply_isValid = false;

    m_quote_isSet = false;
    m_quote_isValid = false;

    m_quote_parse_mode_isSet = false;
    m_quote_parse_mode_isValid = false;

    m_quote_entities_isSet = false;
    m_quote_entities_isValid = false;

    m_quote_position_isSet = false;
    m_quote_position_isValid = false;
}

void OAIReplyParameters::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIReplyParameters::fromJsonObject(QJsonObject json) {

    m_message_id_isValid = ::tele_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_allow_sending_without_reply_isValid = ::tele_rest::fromJsonValue(m_allow_sending_without_reply, json[QString("allow_sending_without_reply")]);
    m_allow_sending_without_reply_isSet = !json[QString("allow_sending_without_reply")].isNull() && m_allow_sending_without_reply_isValid;

    m_quote_isValid = ::tele_rest::fromJsonValue(m_quote, json[QString("quote")]);
    m_quote_isSet = !json[QString("quote")].isNull() && m_quote_isValid;

    m_quote_parse_mode_isValid = ::tele_rest::fromJsonValue(m_quote_parse_mode, json[QString("quote_parse_mode")]);
    m_quote_parse_mode_isSet = !json[QString("quote_parse_mode")].isNull() && m_quote_parse_mode_isValid;

    m_quote_entities_isValid = ::tele_rest::fromJsonValue(m_quote_entities, json[QString("quote_entities")]);
    m_quote_entities_isSet = !json[QString("quote_entities")].isNull() && m_quote_entities_isValid;

    m_quote_position_isValid = ::tele_rest::fromJsonValue(m_quote_position, json[QString("quote_position")]);
    m_quote_position_isSet = !json[QString("quote_position")].isNull() && m_quote_position_isValid;
}

QString OAIReplyParameters::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIReplyParameters::asJsonObject() const {
    QJsonObject obj;
    if (m_message_id_isSet) {
        obj.insert(QString("message_id"), ::tele_rest::toJsonValue(m_message_id));
    }
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_allow_sending_without_reply_isSet) {
        obj.insert(QString("allow_sending_without_reply"), ::tele_rest::toJsonValue(m_allow_sending_without_reply));
    }
    if (m_quote_isSet) {
        obj.insert(QString("quote"), ::tele_rest::toJsonValue(m_quote));
    }
    if (m_quote_parse_mode_isSet) {
        obj.insert(QString("quote_parse_mode"), ::tele_rest::toJsonValue(m_quote_parse_mode));
    }
    if (m_quote_entities.size() > 0) {
        obj.insert(QString("quote_entities"), ::tele_rest::toJsonValue(m_quote_entities));
    }
    if (m_quote_position_isSet) {
        obj.insert(QString("quote_position"), ::tele_rest::toJsonValue(m_quote_position));
    }
    return obj;
}

qint32 OAIReplyParameters::getMessageId() const {
    return m_message_id;
}
void OAIReplyParameters::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAIReplyParameters::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAIReplyParameters::is_message_id_Valid() const{
    return m_message_id_isValid;
}

OAIReplyParameters_chat_id OAIReplyParameters::getChatId() const {
    return m_chat_id;
}
void OAIReplyParameters::setChatId(const OAIReplyParameters_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAIReplyParameters::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAIReplyParameters::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

bool OAIReplyParameters::isAllowSendingWithoutReply() const {
    return m_allow_sending_without_reply;
}
void OAIReplyParameters::setAllowSendingWithoutReply(const bool &allow_sending_without_reply) {
    m_allow_sending_without_reply = allow_sending_without_reply;
    m_allow_sending_without_reply_isSet = true;
}

bool OAIReplyParameters::is_allow_sending_without_reply_Set() const{
    return m_allow_sending_without_reply_isSet;
}

bool OAIReplyParameters::is_allow_sending_without_reply_Valid() const{
    return m_allow_sending_without_reply_isValid;
}

QString OAIReplyParameters::getQuote() const {
    return m_quote;
}
void OAIReplyParameters::setQuote(const QString &quote) {
    m_quote = quote;
    m_quote_isSet = true;
}

bool OAIReplyParameters::is_quote_Set() const{
    return m_quote_isSet;
}

bool OAIReplyParameters::is_quote_Valid() const{
    return m_quote_isValid;
}

QString OAIReplyParameters::getQuoteParseMode() const {
    return m_quote_parse_mode;
}
void OAIReplyParameters::setQuoteParseMode(const QString &quote_parse_mode) {
    m_quote_parse_mode = quote_parse_mode;
    m_quote_parse_mode_isSet = true;
}

bool OAIReplyParameters::is_quote_parse_mode_Set() const{
    return m_quote_parse_mode_isSet;
}

bool OAIReplyParameters::is_quote_parse_mode_Valid() const{
    return m_quote_parse_mode_isValid;
}

QList<OAIMessageEntity> OAIReplyParameters::getQuoteEntities() const {
    return m_quote_entities;
}
void OAIReplyParameters::setQuoteEntities(const QList<OAIMessageEntity> &quote_entities) {
    m_quote_entities = quote_entities;
    m_quote_entities_isSet = true;
}

bool OAIReplyParameters::is_quote_entities_Set() const{
    return m_quote_entities_isSet;
}

bool OAIReplyParameters::is_quote_entities_Valid() const{
    return m_quote_entities_isValid;
}

qint32 OAIReplyParameters::getQuotePosition() const {
    return m_quote_position;
}
void OAIReplyParameters::setQuotePosition(const qint32 &quote_position) {
    m_quote_position = quote_position;
    m_quote_position_isSet = true;
}

bool OAIReplyParameters::is_quote_position_Set() const{
    return m_quote_position_isSet;
}

bool OAIReplyParameters::is_quote_position_Valid() const{
    return m_quote_position_isValid;
}

bool OAIReplyParameters::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_sending_without_reply_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quote_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quote_parse_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quote_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_quote_position_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIReplyParameters::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_message_id_isValid && true;
}

} // namespace tele_rest
