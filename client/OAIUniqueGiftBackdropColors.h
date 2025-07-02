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

/*
 * OAIUniqueGiftBackdropColors.h
 *
 * This object describes the colors of the backdrop of a unique gift.
 */

#ifndef OAIUniqueGiftBackdropColors_H
#define OAIUniqueGiftBackdropColors_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIUniqueGiftBackdropColors : public OAIObject {
public:
    OAIUniqueGiftBackdropColors();
    OAIUniqueGiftBackdropColors(QString json);
    ~OAIUniqueGiftBackdropColors() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCenterColor() const;
    void setCenterColor(const qint32 &center_color);
    bool is_center_color_Set() const;
    bool is_center_color_Valid() const;

    qint32 getEdgeColor() const;
    void setEdgeColor(const qint32 &edge_color);
    bool is_edge_color_Set() const;
    bool is_edge_color_Valid() const;

    qint32 getSymbolColor() const;
    void setSymbolColor(const qint32 &symbol_color);
    bool is_symbol_color_Set() const;
    bool is_symbol_color_Valid() const;

    qint32 getTextColor() const;
    void setTextColor(const qint32 &text_color);
    bool is_text_color_Set() const;
    bool is_text_color_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_center_color;
    bool m_center_color_isSet;
    bool m_center_color_isValid;

    qint32 m_edge_color;
    bool m_edge_color_isSet;
    bool m_edge_color_isValid;

    qint32 m_symbol_color;
    bool m_symbol_color_isSet;
    bool m_symbol_color_isValid;

    qint32 m_text_color;
    bool m_text_color_isSet;
    bool m_text_color_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIUniqueGiftBackdropColors)

#endif // OAIUniqueGiftBackdropColors_H
