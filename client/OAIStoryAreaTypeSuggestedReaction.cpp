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

#include "OAIStoryAreaTypeSuggestedReaction.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIStoryAreaTypeSuggestedReaction::OAIStoryAreaTypeSuggestedReaction(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStoryAreaTypeSuggestedReaction::OAIStoryAreaTypeSuggestedReaction() {
    this->initializeModel();
}

OAIStoryAreaTypeSuggestedReaction::~OAIStoryAreaTypeSuggestedReaction() {}

void OAIStoryAreaTypeSuggestedReaction::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_reaction_type_isSet = false;
    m_reaction_type_isValid = false;

    m_is_dark_isSet = false;
    m_is_dark_isValid = false;

    m_is_flipped_isSet = false;
    m_is_flipped_isValid = false;
}

void OAIStoryAreaTypeSuggestedReaction::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStoryAreaTypeSuggestedReaction::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_reaction_type_isValid = ::tele_rest::fromJsonValue(m_reaction_type, json[QString("reaction_type")]);
    m_reaction_type_isSet = !json[QString("reaction_type")].isNull() && m_reaction_type_isValid;

    m_is_dark_isValid = ::tele_rest::fromJsonValue(m_is_dark, json[QString("is_dark")]);
    m_is_dark_isSet = !json[QString("is_dark")].isNull() && m_is_dark_isValid;

    m_is_flipped_isValid = ::tele_rest::fromJsonValue(m_is_flipped, json[QString("is_flipped")]);
    m_is_flipped_isSet = !json[QString("is_flipped")].isNull() && m_is_flipped_isValid;
}

QString OAIStoryAreaTypeSuggestedReaction::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStoryAreaTypeSuggestedReaction::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_reaction_type.isSet()) {
        obj.insert(QString("reaction_type"), ::tele_rest::toJsonValue(m_reaction_type));
    }
    if (m_is_dark_isSet) {
        obj.insert(QString("is_dark"), ::tele_rest::toJsonValue(m_is_dark));
    }
    if (m_is_flipped_isSet) {
        obj.insert(QString("is_flipped"), ::tele_rest::toJsonValue(m_is_flipped));
    }
    return obj;
}

QString OAIStoryAreaTypeSuggestedReaction::getType() const {
    return m_type;
}
void OAIStoryAreaTypeSuggestedReaction::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIStoryAreaTypeSuggestedReaction::is_type_Set() const{
    return m_type_isSet;
}

bool OAIStoryAreaTypeSuggestedReaction::is_type_Valid() const{
    return m_type_isValid;
}

OAIReactionType OAIStoryAreaTypeSuggestedReaction::getReactionType() const {
    return m_reaction_type;
}
void OAIStoryAreaTypeSuggestedReaction::setReactionType(const OAIReactionType &reaction_type) {
    m_reaction_type = reaction_type;
    m_reaction_type_isSet = true;
}

bool OAIStoryAreaTypeSuggestedReaction::is_reaction_type_Set() const{
    return m_reaction_type_isSet;
}

bool OAIStoryAreaTypeSuggestedReaction::is_reaction_type_Valid() const{
    return m_reaction_type_isValid;
}

bool OAIStoryAreaTypeSuggestedReaction::isIsDark() const {
    return m_is_dark;
}
void OAIStoryAreaTypeSuggestedReaction::setIsDark(const bool &is_dark) {
    m_is_dark = is_dark;
    m_is_dark_isSet = true;
}

bool OAIStoryAreaTypeSuggestedReaction::is_is_dark_Set() const{
    return m_is_dark_isSet;
}

bool OAIStoryAreaTypeSuggestedReaction::is_is_dark_Valid() const{
    return m_is_dark_isValid;
}

bool OAIStoryAreaTypeSuggestedReaction::isIsFlipped() const {
    return m_is_flipped;
}
void OAIStoryAreaTypeSuggestedReaction::setIsFlipped(const bool &is_flipped) {
    m_is_flipped = is_flipped;
    m_is_flipped_isSet = true;
}

bool OAIStoryAreaTypeSuggestedReaction::is_is_flipped_Set() const{
    return m_is_flipped_isSet;
}

bool OAIStoryAreaTypeSuggestedReaction::is_is_flipped_Valid() const{
    return m_is_flipped_isValid;
}

bool OAIStoryAreaTypeSuggestedReaction::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reaction_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_dark_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_flipped_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIStoryAreaTypeSuggestedReaction::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_reaction_type_isValid && true;
}

} // namespace tele_rest
