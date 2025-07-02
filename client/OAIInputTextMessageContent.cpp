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

#include "OAIInputTextMessageContent.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInputTextMessageContent::OAIInputTextMessageContent(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInputTextMessageContent::OAIInputTextMessageContent() {
    this->initializeModel();
}

OAIInputTextMessageContent::~OAIInputTextMessageContent() {}

void OAIInputTextMessageContent::initializeModel() {

    m_message_text_isSet = false;
    m_message_text_isValid = false;

    m_parse_mode_isSet = false;
    m_parse_mode_isValid = false;

    m_entities_isSet = false;
    m_entities_isValid = false;

    m_link_preview_options_isSet = false;
    m_link_preview_options_isValid = false;
}

void OAIInputTextMessageContent::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInputTextMessageContent::fromJsonObject(QJsonObject json) {

    m_message_text_isValid = ::tele_rest::fromJsonValue(m_message_text, json[QString("message_text")]);
    m_message_text_isSet = !json[QString("message_text")].isNull() && m_message_text_isValid;

    m_parse_mode_isValid = ::tele_rest::fromJsonValue(m_parse_mode, json[QString("parse_mode")]);
    m_parse_mode_isSet = !json[QString("parse_mode")].isNull() && m_parse_mode_isValid;

    m_entities_isValid = ::tele_rest::fromJsonValue(m_entities, json[QString("entities")]);
    m_entities_isSet = !json[QString("entities")].isNull() && m_entities_isValid;

    m_link_preview_options_isValid = ::tele_rest::fromJsonValue(m_link_preview_options, json[QString("link_preview_options")]);
    m_link_preview_options_isSet = !json[QString("link_preview_options")].isNull() && m_link_preview_options_isValid;
}

QString OAIInputTextMessageContent::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInputTextMessageContent::asJsonObject() const {
    QJsonObject obj;
    if (m_message_text_isSet) {
        obj.insert(QString("message_text"), ::tele_rest::toJsonValue(m_message_text));
    }
    if (m_parse_mode_isSet) {
        obj.insert(QString("parse_mode"), ::tele_rest::toJsonValue(m_parse_mode));
    }
    if (m_entities.size() > 0) {
        obj.insert(QString("entities"), ::tele_rest::toJsonValue(m_entities));
    }
    if (m_link_preview_options.isSet()) {
        obj.insert(QString("link_preview_options"), ::tele_rest::toJsonValue(m_link_preview_options));
    }
    return obj;
}

QString OAIInputTextMessageContent::getMessageText() const {
    return m_message_text;
}
void OAIInputTextMessageContent::setMessageText(const QString &message_text) {
    m_message_text = message_text;
    m_message_text_isSet = true;
}

bool OAIInputTextMessageContent::is_message_text_Set() const{
    return m_message_text_isSet;
}

bool OAIInputTextMessageContent::is_message_text_Valid() const{
    return m_message_text_isValid;
}

QString OAIInputTextMessageContent::getParseMode() const {
    return m_parse_mode;
}
void OAIInputTextMessageContent::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAIInputTextMessageContent::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAIInputTextMessageContent::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAIInputTextMessageContent::getEntities() const {
    return m_entities;
}
void OAIInputTextMessageContent::setEntities(const QList<OAIMessageEntity> &entities) {
    m_entities = entities;
    m_entities_isSet = true;
}

bool OAIInputTextMessageContent::is_entities_Set() const{
    return m_entities_isSet;
}

bool OAIInputTextMessageContent::is_entities_Valid() const{
    return m_entities_isValid;
}

OAILinkPreviewOptions OAIInputTextMessageContent::getLinkPreviewOptions() const {
    return m_link_preview_options;
}
void OAIInputTextMessageContent::setLinkPreviewOptions(const OAILinkPreviewOptions &link_preview_options) {
    m_link_preview_options = link_preview_options;
    m_link_preview_options_isSet = true;
}

bool OAIInputTextMessageContent::is_link_preview_options_Set() const{
    return m_link_preview_options_isSet;
}

bool OAIInputTextMessageContent::is_link_preview_options_Valid() const{
    return m_link_preview_options_isValid;
}

bool OAIInputTextMessageContent::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_message_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parse_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_link_preview_options.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInputTextMessageContent::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_message_text_isValid && true;
}

} // namespace tele_rest
